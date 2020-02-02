t = int(input())

for _ in range(t):
    # fn = n + fn-1
    # fn = n + n-1 + n-2 + ... + f1
    # fn = (n + 2)*(n-1)/2 + 2
    n = int(input())
    # print(n)
    print((n*n + n + 2)>>1)

