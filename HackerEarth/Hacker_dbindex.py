import pandas as pd
import numpy as np
import math
from sklearn.cluster import k_means
from scipy.spatial import distance
def compute_s_i(data,labels,centroids,n):
    s_i = np.array([0.0]*n)
    size_of_data = len(labels)
    size_of_cluster = np.array([0]*n)

    for i in range(size_of_data):
        s_i[ labels[i] ] += np.linalg.norm(data[i]-centroids[ labels[i] ])
        size_of_cluster[ labels[i] ] +=1
    for i in range(n):
    	s_i[i] /= size_of_cluster[i]
    return s_i

def compute_sigma_r_i(s_i,centroids,n):
    r_i = 0.0
    for i in range(n):
        r_ij = []
        for j in range(n):
            if i!=j:
                r_ij += [ (s_i[i]+s_i[j])/np.linalg.norm(centroids[i]-centroids[j]) ]
        r_i += max(r_ij)
    return r_i
def main():
    m = int(input())
    n = int(input())
    k = int(input())
    data = []
    for i in range(m):
        data += [[float(x) for x in raw_input().split() ]]
    clf = k_means(data,n_clusters=k)
    
    data = np.array(data)
    centroids = clf[0]
    labels = clf[1]
    s_i = compute_s_i(data,labels,centroids,k)
    sigma_r_i = compute_sigma_r_i(s_i,centroids,k)
    dbindex = sigma_r_i/k
    print("%0.20f"%(dbindex))
if __name__ == '__main__':
    main()