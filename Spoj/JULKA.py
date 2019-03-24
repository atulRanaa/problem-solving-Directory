for i in range(1,11):
	n = raw_input()
	m = raw_input()
	if (int(n[-1])+int(m[-1]))%2 == 1:
		b = (int(n)-int(m))/2.0
	else:
		b = (int(n)-int(m))/2
	a = b + int(m)
	print a
	print b 