s = 0

def checkValidity(a, b, c):  
      
    # check condition  
    if (a + b <= c) or (a + c <= b) or (b + c <= a) : 
        return False
    else: 
        return True


c = 1
while True:
	if (3*c) > 1000000000:
		break

	s += 3*c
	if (3*c + 1) > 1000000000:
		break

	s += 3*c + 1
	c += 1
print s