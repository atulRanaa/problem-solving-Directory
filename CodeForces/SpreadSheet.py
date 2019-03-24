import re
def fun():
	s = raw_input()
	n = 0
	p = ""
	di = re.findall('\d+',s)
	if len(di) == 1:
		for ch in s:
			t = ord(ch)
			if t > 64:
				n = n*26 + t-64
			else: break
		print "R"+di[0]+"C"+str(n)
	else:
		di[1] = int(di[1])
		while di[1] > 0:
			t = int(di[1])%26
			if t==0:
			 p+="Z"
			 di[1]=(di[1]-26)/26
			else:
			 p+=chr(t+64)
			 di[1] = di[1]/26
		print p[::-1]+str(di[0])
for i in range(0,input()):
	fun()