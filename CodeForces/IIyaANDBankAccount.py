s = raw_input()
l = len(s)
print max(int(s),int(s[0:(l-1)]),int(s[0:(l-2)]+s[l-1]))
