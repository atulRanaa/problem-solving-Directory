import math


n, m = input().split(' ')
n = int(n)
m = math.floor( float(m) * 100 )


# print(n, m)
print(int((n * m) / 100))