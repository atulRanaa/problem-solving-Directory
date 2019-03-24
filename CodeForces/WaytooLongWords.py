for _ in range(input()):
 s = raw_input()
 l = len(s)
 if l > 10 : print "%c%d%c"%(s[0],l-2,s[l-1])
 else: print s
