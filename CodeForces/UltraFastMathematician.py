t = raw_input()
l = len(t)
a = int(t,2)
b = int(raw_input(),2)
s = bin(a^b)[2:]
if len(s) != l: s = ''.join(['0']*abs(l-len(s)))+s

print s