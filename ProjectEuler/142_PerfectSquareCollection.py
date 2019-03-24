import gmpy

f  = 0
for z in xrange(1,1001):
	for y in xrange(z+1,1001):
		for x in xrange(y+1,1001):
			a = gmpy.is_square(x+y)
			b = gmpy.is_square(x-y)
			c = gmpy.is_square(x+z)
			d = gmpy.is_square(x-z)
			e = gmpy.is_square(y+z)
			f = gmpy.is_square(y-z)

			if a and b and c and d and e and f:
				print x,y,z