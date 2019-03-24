n = input()
s = raw_input()
ar= map(int ,s.split())

a=s.count('1')
b=s.count('2')
c=s.count('3')

mteam = min(a,b,c)
print mteam

for i in range(0,mteam):
  a=ar.index(1)
  b=ar.index(2)
  c=ar.index(3)
  ar[a]=0
  ar[b]=0
  ar[c]=0
  print (a+1),(b+1),(c+1)