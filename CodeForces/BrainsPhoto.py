r,c=map(int ,raw_input().split())
l = []
for i in range(0,r):
    l+=[ch for ch in raw_input().split()]
if 'C' in l :print "#Color"
elif 'M' in l:print "#Color"
elif 'Y' in l:print "#Color"
else: print "#Black&White"