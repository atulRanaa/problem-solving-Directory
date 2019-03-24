a = input()
s = "that ".join("I hate " if i&1 else "I love " for i in range(1,a+1) )
print s+"it"