s = raw_input()
ans =""
if int(s[0]) >= 5 and int(s[0])!=9:ans += str(9-int(s[0]))
else : ans += s[0]

ans+="".join([ str(9-int(i)) if int(i)>=5 else i for i in s[1:]])
print ans