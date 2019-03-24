s = raw_input()
ind = s.find("AB")
ind2= s.find("BA")
if ind!=-1 and (s[0:ind]+".."+s[(ind+2):]).find("BA") >= 0: print "YES"
elif ind2!=-1 and (s[0:ind2]+".."+s[(ind2+2):]).find("AB") >= 0: print "YES"
else : print "NO"