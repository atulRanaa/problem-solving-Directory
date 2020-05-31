n = input()
ar = map(int, input().split(' '))

product = 1
exe = 1
maxP = 1000000000000000000

for val in ar:
    product *= val
    # print(product)
    if(product > maxP):
        product = -1
        break

for e in ar:
    if(e == 0):
        exe = 0

print(product * exe)
# print(exe)