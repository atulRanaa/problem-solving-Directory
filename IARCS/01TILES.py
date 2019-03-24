n = input()

if n==1:
	print 1
elif n==2:
	print 2
else:
	a,b = 1,2
	j = 3
	while j<=n:
		a,b = b%15746 , (a+b)%15746
		j += 1
	print b