while True:
	n = input()
	if n==0: break
	s = raw_input()
	l = len(s)
	mat = []
	i = 0
	j = 0
	while (i+n) <= l:
		if j%2==0: mat += [ s[i:(i+n)] ]
		else: mat += [ s[i:(n+i)][::-1]]
		j += 1 
		i += n
	l = len(mat)
	ans = ""
	for i in range(n):
		for j in range(l): ans += mat[j][i]
	print ans