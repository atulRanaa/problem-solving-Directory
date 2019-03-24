ans = 0
for _ in range(input()):
 s = raw_input()
 if '+' in s:
  ans = ans+1
 else:
  ans = ans-1
print ans