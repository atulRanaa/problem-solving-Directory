a = [4,7,44,47,74,77,444,447,447,477,744,747,774,777]
n = input()
flag = False

for i in a:
 if n%i == 0:
  flag = True
  break

if flag: print "YES"
else: print "NO"