a,s,d,f = map(int ,raw_input().split())
m = min(a,d,f)
print 256*m + min(a-m,s)*32