l,s = map(int ,raw_input().split())
if l==1 and s==0 : print "0 0"
elif l>1 and s==0 : print "-1 -1"
elif l*9 < s : print "-1 -1"
else :
 big = "9"*(s/9)
 if s%9 > 0 : big+=str(s%9)
 small = big[::-1]
 if len(small) < l: small="1"+"0"*(l-len(small)-1)+str( int(big)-1)[::-1]
 print small,big+"0"*(l-len(big))