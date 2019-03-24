import math
n,nth,num = 0,input(),1
while n < nth:
	f = True
	num += 1
	for i in range(2,int(math.sqrt(num))+1):
		if num%i == 0:
			f = False
			break
	if f:
		n += 1
print num