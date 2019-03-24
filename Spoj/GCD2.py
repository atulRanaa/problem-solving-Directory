import sys
sys.stdin=open('input.txt','r')
sys.stdout=open('output.txt','w')

def gcd(a,b):
	if a==0: return b
	if b==0: return a
	else:
		return gcd(b,a%b)

t = input()
for _ in range(t):
	a,b = raw_input().split()
	print gcd(int(a),int(b))