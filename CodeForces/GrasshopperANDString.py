s = raw_input()
v = ['A','E','I','O','U','Y']
p =0
q =0
for c in s:
 p+=1
 if c in v:
  if p>q: q=p
  p = 0
print max(p+1,q)