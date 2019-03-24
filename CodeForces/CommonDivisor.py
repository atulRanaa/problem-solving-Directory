a = raw_input()
b = raw_input()

if a==b:
	l = len(a)
	div = [a]
	for i in range(1,l/2 +1):
		if l%(i) == 0:
			temp = a[:(i)]*(l/(i))
			if temp == a:
				div += [a[:(i)]]
	print len(div)
else:
	la = len(a)
	diva = [a]
	for i in range(1,la/2 +1):
		if la%(i) == 0:
			temp = a[:(i)]*(la/(i))
			if temp == a:
				diva += [a[:(i)]]
	lb = len(b)
	divb = [b]
	for i in range(1,lb/2 +1):
		if lb%(i) == 0:
			temp = b[:(i)]*(lb/(i))
			if temp == b:
				divb += [b[:(i)]]
	count = 0
	for c in diva:
		if c in divb: count += 1
	print count
