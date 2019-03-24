n = raw_input()
s = set([])
s.add(int(n))
count = 0 
while True:
	n = sum([int(x)**2 for x in str(n)])
	count += 1
	if n==1:
		print count
		break
	elif n in s:
		print -1
		break
	else:
		s.add(n)