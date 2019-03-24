r1 = (50*101)**2 
r2 = (100*101*201)/6
print r1,r2,r1-r2

s1 = 0
s2 = 0
for i in range(1,101):
	s1 += i
	s2 += i**2
print s1**2,s2,s1**2-s2