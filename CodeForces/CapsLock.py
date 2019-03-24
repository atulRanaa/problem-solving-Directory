s = raw_input()
ans = s
l = len(s)
flag=True
for i in range(1,l):
 if s[i].islower(): 
 	flag=False
 	break
if flag:
	ans = s.lower()
	if s[0].islower():
	 ans = ans.capitalize()
print ans
