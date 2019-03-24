import sys
sys.stdin = open("PrjectEulerP_83.txt",'r')

n,m = 80,80


mat = []
for i in xrange(80):
	s = [ int(x) for x in raw_input().split(',') ] 
	mat += [ s ]


for i in xrange(1,n):
	mat[i][0] += mat[i-1][0]
for j in xrange(1,m):
	mat[0][j] += mat[0][j-1]
for i in xrange(1,n):
	for j in xrange(1,m):
		mat[i][j] += min( mat[i][j-1], mat[i-1][j])
		

print mat[79][79]