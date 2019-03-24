n,m = map( int , raw_input().split())
d = {}
for i in range(0,m):
	a,b = map( str , raw_input().split())
	d[a]=b
s = map(str ,raw_input().split())
for i in range(0,n):
#    print s[i],d[ s[i] ]
	if len(s[i]) > len( d[s[i]]): s[i]=d[ s[i] ]
print " ".join(s)