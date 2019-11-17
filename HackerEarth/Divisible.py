n = input()
ar = raw_input().split(' ')

first = ''.join([ x[0] for x in ar[:(n/2)] ])
last = ''.join([ x[-1] for x in ar[(n/2):] ])

# print(first + last)
if int(first + last)%11 == 0:
    print("OUI")
else: print("NON")