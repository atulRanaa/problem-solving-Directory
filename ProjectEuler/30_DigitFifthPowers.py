ans = 0
for i in range(2,200001):
	sum = 0
	for c in str(i):
		sum += int(c)**5
	if sum==i:
		print i
		ans += i
print "Ans", ans
