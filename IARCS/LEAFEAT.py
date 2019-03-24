import sys 
#sys.stdin = open('input.txt', 'r')

def gcd(a,b):
	if b==0:
		return a
	else:
		return gcd(b,a%b)


if __name__ == "__main__":
	n,k = map(int, raw_input().split())
	A = []
	for _ in xrange(k):
		A += [ int(raw_input())]
	#print A

	inc_excl = 0
	limit = 2**(k)
	for i in xrange(1,limit):

		lcm = -1
		setbit = 0
		for j in xrange(k):
			a = i&(1<<j)
			if a > 0:
				setbit += 1
				#print A[j],
				if lcm==-1:
					lcm = A[j]
				else:
					lcm = (lcm*A[j])/gcd(lcm,A[j])

		inc_excl += ((-1)**(setbit+1))*(1+ (n-1)/lcm )
		#print "vals",lcm, inc_excl

	print n-inc_excl

# B= [0]*(n+1)
# for ele in A:
# 	j = 1
# 	while j <= n:
# 		B[j]=1
# 		j += ele
# cnt = 0
# for i in range(1, n+1):
# 	if B[i]==0:
# 		cnt += 1
# print "actual", cnt
