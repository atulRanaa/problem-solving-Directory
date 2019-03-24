s = raw_input()
a = sum(1 for c in s if c.islower())
b = sum(1 for c in s if c.isupper())

if a>=b: print s.lower()
else: print s.upper()