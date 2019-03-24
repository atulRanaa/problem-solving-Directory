ans =0
l = input()
s = raw_input()
for i in range(1,l):
 if s[i]==s[i-1]:
  ans +=1
print ans