import sys
sys.stdin=open('input.txt','r')
sys.stdout=open('output.txt','w')

mul = [0,1,20,360,7200,144000,2880000,57600000]
while True:
	n = input()
	if n==0: break

	ans = 0
	for i in xrange(n):
		s = raw_input()
		num = s.count('.')+5*s.count('-')
		ans += num*mul[n-i]
	print ans
	blank = raw_input()