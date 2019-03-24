t = input()
seq = ['TTT', 'TTH', 'THT', 'THH', 'HTT', 'HTH', 'HHT','HHH']
for _ in range(t):
	count = [0,0,0,0,0,0,0,0]
	n = input()
	s = raw_input()

	for i in range(38):
		ind = seq.index(s[i:(i+3)])
		count[ind] += 1
	print n,
	for j in count: print j,