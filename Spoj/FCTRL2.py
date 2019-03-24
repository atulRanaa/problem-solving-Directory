f= [0]*101

ans = 1
for i in range(1,101):
	ans = ans*i
	f[i] = ans

for _ in range(input()):
	n = input()
	print f[n]