import math
num = 600851475143
ar = []
if num%2 == 0:
	ar += [2]
while num%2 == 0:
	num /= 2
i = 3
while i <= math.sqrt(600851475143):
	count = 0
	if num%i == 0:
		while num%i == 0:
			num /= i
			count += 1
		ar += [[i,count]]
	i += 2
print ar
