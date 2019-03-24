arr =[0]*1000001
for i in range(1000001):
 if str(i)==str(i)[::-1]:
  arr[i]=1;
for _ in range(input()):
 a = input()
 while a < 1000001:
  a += 1
  if arr[a]==1:
    break;
 print a

