for _ in range(input()):
 a = raw_input().split()
 ans = int(a[0][::-1])+int(a[1][::-1])
 ans = int(str(ans)[::-1]) 
 print ans
