s = ""
i = 1
while len(s) <= 1000000:
	s += str(i)
	i += 1
ans = 1
it = 1
while it <= 1000000:
	ans *= int(s[it-1])
	it *= 10


print "Ans", ans
