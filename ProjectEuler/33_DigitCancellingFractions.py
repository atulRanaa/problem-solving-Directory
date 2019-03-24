def gcd(a,b):
	if b==0: return a
	else:
		return gcd(b,a%b)

for i in range(10,100):
	for j in range(10,i):
		a = str(j)
		b = str(i)
		f = False
		if a[0]==b[0]:
			a = a[1]
			b = b[1]
			f = True
		elif a[1]==b[0]:
			a = a[0]
			b = b[1]
			f = True
		elif a[0]==b[1]:
			a = a[1]
			b = b[0]
			f = True
		elif a[1]==b[1]:
			a = a[0]
			b = b[0]
			f = True
		tnum = int(a)/gcd(int(a),int(b))
		tden = int(b)/gcd(int(a),int(b))
		g = gcd(i,j)
		num = j/g
		den = i/g

		if f and tnum==num and tden==den and '0' not in str(j):
			print num,den
