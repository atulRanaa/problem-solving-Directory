import sys
sys.stdin=open('input.txt','r')
sys.stdout=open('output.txt','w')

n = input()
for _ in xrange(n):
	s = raw_input()
	l = len(s)

	i = 3
	count = 0
	while i < l:
		t = s[(i-3):(i+1)]
		if 'c' in t and 'h'in t and 'e' in t and 'f'in t:
			count += 1
		i += 1
	if count==0: print "normal"
	else: print "lovely",count
