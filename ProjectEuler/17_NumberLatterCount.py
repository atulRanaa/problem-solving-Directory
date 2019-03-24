import inflect
p = inflect.engine()
count = 0
for i in range(1,1001):
	s = p.number_to_words(i)
	s = s.replace('-','').replace(' ','')
	if(i==342 or i==115): print len(s)
	count += len(s)
print count