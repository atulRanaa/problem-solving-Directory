n=input()
d={}
l=[""]*n
v=[]
for i in range(0,n):
 l[i] = raw_input()
 if d.has_key(l[i]) :
  d[ l[i] ]+=1
  v+=[ d[ l[i] ]]
 else: 
  d[ l[i] ]=0
  v+=[ d[ l[i] ]]
for i in range(0,n):
 if v[i] > 0: print l[i]+str(v[i])
 else : print "OK"