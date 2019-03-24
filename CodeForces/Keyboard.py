key="qwertyuiopasdfghjkl;zxcvbnm,./"
d = -1 if(raw_input()=="R") else 1
s = raw_input()
ans=""
for c in s:
	ans+=key[key.find(c)+d]
print ans