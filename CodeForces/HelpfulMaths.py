s = raw_input()
one = s.count('1');
two = s.count('2');
tre = s.count('3');
l = len(s)
i = 0
s = list(s)
while one > 0:
 s[i]='1'
 one -=1
 i+=2
while two > 0:
 s[i]='2'
 two -=1
 i+=2
while tre > 0:
 s[i]='3'
 tre -=1
 i+=2
print ''.join(s)