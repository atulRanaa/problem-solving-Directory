tc = input()
g, t = 0, 7
for _ in xrange(tc):
    n = input()
    if( abs(g-n) <= abs(n-t) ):
        g = n
        print('A')
    else:
        t = n
        print('B')
