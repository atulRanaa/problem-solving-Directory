# def m(s):
#     ans = ''
#     for i in range(len(s)):
#         if i % 2 == 0:
#             ans += s[i]
#     return ans

# print(m('HelloWorld'))

# lst= [x * y for x in range(3,9,2) for y in range(6, 1, -1) if x * y % 2 == 0 ]

# print(lst)



# def fn(a, n):
#     try:
#         print(a[n])
#     except IndexError:
#         print("In IndexError")
#         raise ValueError("An error")
#     except:
#         print("Some error")
#     print("Bye")


# lst = [1, 2, 3]
# try:
#    fn(lst, 1)
#    fn(lst, 3)
#    fn(lst, 2)
# except ValueError as msg:
#    print(msg)


# gamesRamesh = ('lawn tennis', 'cricket')
# gamesSuresh = ('cricket', 'hockey', 'badminton')

# # convert list ot set
# gamesRamesh = set(gamesRamesh)
# gamesSuresh = set(gamesSuresh)

# # games played by Suresh but not Ramesh
# print(gamesSuresh - gamesRamesh)

# # games that are common to both of them
# print(gamesSuresh & gamesRamesh)

# # all the games that are played by either of them
# print(gamesSuresh | gamesRamesh)

# # games that are not common to both of them
# print((gamesSuresh | gamesRamesh) - (gamesSuresh & gamesRamesh))

# def read_file(file_name):
#     try:
#         file = open(file_name, 'r')
#         Lines = file.readlines()

#         count = 0
#         # Strips the newline character
#         for line in Lines:
#             # print("Line{}: {}".format(count, line.strip()))
#             count += 1

#         return count
#     except Exception:
#         return -1

# print(read_file('Testing.py'))
# print(read_file('T.py'))

#ofElements is invalid identifiers as it is a comment
# Noofelements  is valid identifiers
# 3elements is invalid identifier as identifier only starts with alphabet and _
# noOfElements is valid identifiers
# for is invalid identifier as it is a keyword
# In is a valid identifiers


priceList = {'Pen': 10, 'Pencil': 5, 'Eraser': 5, 'Ruler': 20}

def rate(key):
    if key in priceList:
        return priceList[key]

    return -1

def update(dictionary, product_name, product_rate):

    if product_rate <= 0 and product_name in dictionary:
        dictionary = dictionary.pop(product_name)

    dictionary[product_name] = product_rate
    return dictionary

print(rate('Paper'))
print(rate('Pen'))

priceList = update(priceList, 'Pen', 20)
priceList = update(priceList, 'Paper', 30)
priceList = update(priceList, 'Ruler', -1)
print(priceList)


# depends on value of a, initial, else will break as a is not defined
# 4
# '32 * 76'
# 'hohohohoho'
# True

def Diamond(rows):
    n = 0

    character = 65

    for i in range(1, rows + 1):
        for j in range (1, (rows - i) + 1):
            print(end = " ")

        itr = 0
        M = 0
        N = 2 * i - 1

        while n != (2 * i - 1):
            print(chr(character - itr), end = "")
            n = n + 1
            if(M < N/2):
                itr = itr + 1
            else:
                itr = itr - 1
            M = M + 1
        n = 0
        print()
        character = character + 1

    character = character - 1
    k = 1
    n = 1
    for i in range(1, rows):
        for j in range (1, k + 1):
            print(end = " ")
        k = k + 1

        itr = 0
        M = 0
        N = 2 * (rows - i) - 1

        while n <= (2 * (rows - i) - 1):
            print(chr(character - itr), end = "")
            n = n + 1
            if(M < N/2):
                itr = itr + 1
            else:
                itr = itr - 1
            M = M + 1
        n = 1
        print()
        character = character - 1



rows = 5
Diamond(rows)

