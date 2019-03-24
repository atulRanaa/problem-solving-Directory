def prime(n):
    	res=n
    	l = int(n**0.5) +1
        for i in range(2,l):
    		if n%i==0:
    			res=res-res/i
    			while n%i==0:
    			    n=n/i
    	if n>1 :
    	    res=res-res/n
    	return res
n,k = map(int ,raw_input().split())
while k > 0:
 n=prime(n)
 if n==1: 
    break
 k-=1
print n