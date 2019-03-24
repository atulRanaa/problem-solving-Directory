p = [0]*1000000;
p[0]=1;
p[1]=1;
for i in range(2,1000000):
	if(p[i] == 0):
		for j in range(i*i , 1000000,i):
			p[j] = 1
count = 0
sum = 0
for i in range(11,1000000):
	if p[i] == 0:
		s = str(i)
		l = len(s)
		f1 = True
		for j in range(l):
			if p[int(s)] == 1:
				f1 = False
				break
			s = s[1:]
		f2 = True
		s = str(i)
		for j in range(l):
			if p[int(s)] == 1:
				f2 = False
				break
			s = s[:-1]
		if f1 and f2:
			count += 1
			sum += i
			print i
	if count == 11: break
if count == 11: print sum
else: print -1

