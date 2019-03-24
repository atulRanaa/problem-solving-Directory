fact = [1]*10
for i in range(1,10):
	fact[i] = fact[i-1]*i
print sum(fact)

ans = 0
for i in range(1000001):
	temp = 0
	for c in str(i): temp += fact[int(c)]
	if temp == i:
		print i
		ans += i
print "Ans", ans
