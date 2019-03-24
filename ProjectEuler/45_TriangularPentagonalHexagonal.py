mark = {}
for i in range(1,100000):
	a = i*(i+1)/2
	b = i*(3*i-1)/2
	c = i*(2*i-1)
	if a in mark:
		mark[a] += 1
	else: mark[a] = 1
	if b in mark:
		mark[b] += 1
	else: mark[b] = 1
	if c in mark:
		mark[c] += 1
	else: mark[c] = 1
print len(mark)
for i in mark:
	if mark[i]==3: print i 