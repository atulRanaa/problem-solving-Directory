s = raw_input().lower()
l = len(s)
ans = ""
for i in range(l):
 if s[i] not in ['a','o','y','e','u','i']:
  ans = ans+'.'+s[i]
print ans