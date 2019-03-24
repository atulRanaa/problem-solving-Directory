import math
import gmpy
def checkValidity(a, b, c):
    if (a + b <= c) or (a + c <= b) or (b + c <= a) : 
        return False
    else: 
        return True

def area(a,b,c):
	if (a+b+c)&1:
		return False

	s = (a+b+c)/2
	A = s*(s-a)*(s-b)*(s-c)

	if A < 0:
		return False
	return gmpy.is_square(A)

ans = 0
L = 1000000000
a = 1
while (1):
	if a+a+(a-1) > L:
		break

	if checkValidity(a,a,a-1) and area(a,a,a-1):
		print a,a,a-1
	if a+a+(a+1) > L:
		break
	if checkValidity(a,a,a+1) and area(a,a,a+1):
		print a,a,a+1

	a += 1

# 5 5 6
# 17 17 16
# 65 65 66
# 241 241 240
# 901 901 902
# 3361 3361 3360
# 12545 12545 12546
# 46817 46817 46816
# 174725 174725 174726
# 652081 652081 652080
# 2433601 2433601 2433602
# 9082321 9082321 9082320
# 33895685 33895685 33895686
# 126500417 126500417 126500416