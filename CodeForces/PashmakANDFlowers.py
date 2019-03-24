n=input()
l=map(int ,raw_input().split())
large = max(l)
small = min(l)
if large==small: ans=(n*(n-1)) /2
else: ans=l.count(large)*l.count(small)
print (large-small),ans