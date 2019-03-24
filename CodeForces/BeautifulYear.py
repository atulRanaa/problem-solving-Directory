n = input()+1
for i in range( n , 9013):
	l = len(set( str(i) ))
	if l == 4: 
		print i
		break