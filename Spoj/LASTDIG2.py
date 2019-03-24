n = input()
ans = [	[0,0,0,0],
		[1,1,1,1],
		[2,4,8,6],
		[3,9,7,1],
		[4,6,4,6],
		[5,5,5,5],
		[6,6,6,6],
		[7,9,3,1],
		[8,4,2,6],
		[9,1,9,1]]
for _ in range(n):
	a,b = raw_input().split()
	if b=='0': print 1
	else:
		a = int(a[-1])
		b = (int(b)-1)%4
		print ans[a][b]