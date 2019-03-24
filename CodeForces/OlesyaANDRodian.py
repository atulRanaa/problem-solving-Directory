n,t=map(int , raw_input().split())
num = int( "1"+"0"*(n-1))
num = num-(num%t)+t

if len(str(num))==n: print num
else: print -1