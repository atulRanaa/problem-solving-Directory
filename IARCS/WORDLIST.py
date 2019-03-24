import sys 

#sys.stdin = open('input.txt', 'r')
#sys.stdout = open('output.txt', 'w')

n = input()
s = []
for _ in xrange(n):
	t = raw_input().strip()
	for c in "'.,;:":
		t = t.replace(c,'')
	t = t.split()
	s += [ x.lower() for x in t ]

s = list(set(s))
s.sort()
print len(s)
for ele in s:
	print ele
