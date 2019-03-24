import math
n = input()
for _ in range(n):
	n,k,m = map(int,raw_input().split())
	if( n >= m ):
		 print 0
	else:
		print(int(math.log(m/n)/math.log(k)))
