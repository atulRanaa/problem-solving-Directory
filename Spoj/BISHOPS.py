try:
	while True:
		n = raw_input()
		if n != "":
			if int(n) == 1: print 1
			else: print 2*int(n) - 2
		else:
			break
except EOFError:
	pass		