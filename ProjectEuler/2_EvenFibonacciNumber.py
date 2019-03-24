a = 0
b = 1
res = 0
while a+b <= 4000000:
	if (a+b)%2 == 0: res += (a+b)
	a,b = b,(a+b)
print res
