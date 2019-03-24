n = input()
s = [""]*n
f = 0
for i in range(0,n):
	s[i] = raw_input()
	
temp = ' '.join(s)

if "OO" not in temp:
	print "NO"
else:
  print "YES" 
  print '\n'.join([a for a in temp.replace("OO","++",1).split()])