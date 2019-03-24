fab = [0]*5010
fab[0]=1
fab[1]=1

for i in range(2,5010):
	fab[i] = fab[i-1]+fab[i-2]

while True:
	s = raw_input()
	if s == '0':
		break
	l = len(s)
	f = True
	for i in range(l-1,-1,-1):
		if int(s[i]) == 0:
			if (int(s[i-1]) not in [1,2]):
				f = False	
	if f == False:

		print 0
	else:
		ans = [0]*(l+1)
		ans[-1]=1
		ans[l-1] = 1
		l -= 2
		while l >= 0:
			if int(s[l])==0:
				ans[l] = ans[l+1]
			elif int(s[l]) in [1,2] and int(s[l+1])==0:
				ans[l] = ans[l+1]
				l -= 1
				if l>=0:
					ans[l]=ans[l+1]
			elif int(s[l]+s[l+1]) <= 26:
				ans[l] = ans[l+1]+ans[l+2]
			else:
				ans[l] = ans[l+1]
			l -= 1
		print ans[0]



