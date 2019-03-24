for _ in range(input()):
	a,b = map(str , raw_input().split())
	print int(str(int(a[::-1])+int(b[::-1]))[::-1])
