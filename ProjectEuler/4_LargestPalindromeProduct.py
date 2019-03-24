ans = 0
for i in range(900,1000):
	for j in range(i,1000):
		num = i*j
		if str(num)==str(num)[::-1]:
			print i,j,num
			if num > ans: ans = num
print ans