def power(x,n,M):

	res = 1
	while(n > 0):

		if(n&1 >= 1):
			res = (res*x)%M
		x = (x*x)%M
		n /= 2
	return res

def val(a,n):
	A = power(a-1, n , a*a)
	B = power(a+1, n , a*a)
	R = (A+B)%(a*a)
	return R



ans = 0
for i in xrange(3,1001):
	t = -1
	check = val(i,1)
	j = 2

	#print check,
	while(1):
		find = val(i,j)
		t = max(find , t)
		if find == check:
			break
		j += 1
	#print "MAX",t
	ans += t

print "SUM", ans