n = input()
assA = {}
l = []
for i in range(0,n):
    l += [raw_input()]
    assA[ l[-1] ]=0
for i in range(0,n):
	assA[ l[i] ]+=1
print max(assA.values())