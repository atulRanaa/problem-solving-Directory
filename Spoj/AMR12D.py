import sys
sys.stdin=open('input.txt','r')
sys.stdout=open('output.txt','w')

n = input()
for _ in range(n):
	s = raw_input()
	l = len(s)
	if s == s[::-1]: print "YES"
	else: print "NO"