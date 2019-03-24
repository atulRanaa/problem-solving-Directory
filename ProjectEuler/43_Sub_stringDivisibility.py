p = [2,3,5,7,11,13,17]
# for i in xrange(1023456789,9876543211):
# 	s = set([c for c in str(i)])
# 	if len(s) == 10:
# 		num = str(i)
# 		f = True
# 		for i in range(1,8):
# 			if int(num[i:(i+3)])%p[i-1] != 0:
# 				f = False
# 				break
# 		if f:
# 			print i

from itertools import permutations
per = permutations([0,1,2,3,4,5,6,7,8,9])


pandigit = []
for i in list(per):
	flag=1

	for j in xrange(1,8):
		if (100*i[j]+10*i[j+1]+i[j+2])%p[j-1] != 0:
			flag=0
	if flag==1:
		pandigit += [ i ]

add = 0
for val in pandigit:
	num = 0
	for ele in val:
		num = num*10 + ele
	add += num
print add