def modExp(a,n,m):
	ans = 1
	while(n > 0):
		if n&1:
			ans = (ans*a)%m
		a = (a*a)%m
		n >>= 1

	return ans

def gcd(a,b):
	if b==0:
		return a
	return gcd(b,a%b)



t = input()
for _ in range(t):
	a,b,n = map(int, raw_input().strip().split())
	x = a-b
	y = 0
	ans = 0

	if x == 0:
		ans = (modExp(a,n,1000000007) + modExp(b,n,1000000007))%1000000007
	else:
		y = (modExp(a,n,x)+modExp(b,n,x))%x
		ans = gcd(x, y) % 1000000007

	print ans
