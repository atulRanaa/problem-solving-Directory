from fractions import Fraction
for _ in range(input()):
	s = raw_input()
	if '.' in s: print int(str(Fraction(s)).split('/')[1])
	else: print 1
