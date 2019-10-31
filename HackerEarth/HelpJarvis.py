n = input()
for _ in xrange(n):
	s = sorted([ int(c) for c in raw_input() ])
	#print(s)
	l = len(s)

	flag = True
	for i in xrange(1,l):
		if( s[i]-s[i-1] != 1):
			flag = False
			break
			
	if flag:
		print("YES")
	else:
		print("NO")