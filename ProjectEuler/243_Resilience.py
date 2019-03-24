def GCD(x, y): 
	while(y): 
		x, y = y, x % y 

	return x

cnt = 0
for i in xrange(1,95001):
	if GCD(95000,i) == 1:
		cnt += 1

print cnt