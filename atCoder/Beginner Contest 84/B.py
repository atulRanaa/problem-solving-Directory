n,m = raw_input().split()
ch = ['0','1','2','3','4','5','6','7','8','9']
f = True
s = raw_input()

for i in range(int(n)):
	if s[i] not in ch:
		f = False
if s[int(n)] != '-':
	f = False
for i in range(int(n)+1,len(s)):
	if s[i] not in ch:
		f = False
if len(s) > (int(n)+int(m)+1):
	f = False
if f:
	print "Yes"
else:
	print "No"