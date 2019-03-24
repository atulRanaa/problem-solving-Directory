n = input()
for _ in range(n):
	blank = raw_input()
	s = raw_input().split()
	l = len(s)-1

	if l == 1:
		print int(s[0])
	else:
		for i in range(2,l,2):
			s[i] = str(eval( s[i-2]+s[i-1]+s[i]))
		print int(s[-2])

