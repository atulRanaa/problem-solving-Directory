import re
s = raw_input().replace("WUB",'a')
s = re.sub(ur'aa*' ,' ',s)
if s[0]==' ': s = s[1:]
l = len(s)
if s[l-1]==' ': s = s[:(l-1)]
print s