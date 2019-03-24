p = [0]*1000000;
p[0]=1;
p[1]=1;
for i in range(2,1000000):
	if(p[i] == 0):
		for j in range(i*i , 1000000,i):
			p[j] = 1
count = 0
for i in range(2,1000000):
	s = str(i)
	f = True
	l = len(s)
	for j in range(l):
		if p[int(s)]==1:
			f = False
			break
		s = s[-1]+s[:(l-1)]
	if f:
		print i
		count += 1
print count

	