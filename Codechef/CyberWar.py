import sys
sys.stdin=open('input.txt','r')
sys.stdout=open('output.txt','w')

n = input()
f = 1
fact = [0]
num = 2
while f <= 2000000000:
	fact += [f]
	f *= num
	num += 1

l = len(fact) 
for _ in xrange(n):
	a = raw_input()
	A = a.count('!')
	b = raw_input()
	B = b.count('!')

	if A == B and A == 2:
		if int(a[:-2]) < int(b[:-2]): print -1
		elif int(a[:-2]) < int(b[:-2]): print 0
		else: print 1 
	elif A == B and A == 1:
		if int(a[:-1]) < int(b[:-1]): print -1
		elif int(a[:-1]) == int(b[:-1]): print 0
		else: print 1
	elif A == 2 and B == 1:
		if int(a[:-2]) >= int(b[:-1]): print 1
		elif int(a[:-2]) >= l: print 1
		elif fact[ int(a[:-2]) ] > int(b[:-1]): print 1
		elif fact[ int(a[:-2]) ]== int(b[:-1]): print 0
		else: print -1 
	elif A == 1 and B == 2:
		if int(b[:-2]) >= int(a[:-1]): print -1
		elif int(b[:-2]) >= l: print -1
		elif fact[ int(b[:-2]) ] > int(a[:-1]): print -1
		elif fact[ int(b[:-2]) ]== int(a[:-1]): print 0
		else: print 1
	elif A == 1 and B == 1:
		if int(a[:-1]) < int(b[:-1]): print -1
		elif int(a[:-1]) < int(b[:-1]): print 0
		else: print 1
	elif A == 1 and B == 0:
		if int(a[:-1]) >= int(b): print 1
		elif int(a[:-1]) >= l: print 1
		elif fact[ int(a[:-1]) ] > int(b): print 1
		elif fact[ int(a[:-1]) ]== int(b): print 0
		else: print -1
	elif A == 0 and B == 1:
		if int(b[:-1]) >= int(a): print -1
		elif int(b[:-1]) >= l: print -1
		elif fact[ int(b[:-1]) ] > int(a): print -1
		elif fact[ int(b[:-1]) ]== int(a): print 0
		else: print 1
	else:
		if int(a) < int(b): print -1
		elif int(a) < int(b): print 0
		else: print 1 