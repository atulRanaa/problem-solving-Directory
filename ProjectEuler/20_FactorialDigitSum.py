num = 1
for i in range(1,101):
	num *= i
ans = 0
for c in str(num): ans += int(c)
print ans