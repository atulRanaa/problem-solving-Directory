a,b,term = 89,144,12
while len(str(b)) < 1000:
	a,b = b,(a+b)
	term += 1
print term