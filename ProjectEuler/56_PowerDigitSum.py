a=0
b=0
DS=0
for i in xrange(90,100):
	for j in xrange(90,100):
		l = [int(x) for x in str(i**j)]
		# if(sum(l) > DS):
		print i,j,DS
		DS = max(DS, sum(l))
print DS
#972