s=""
for i in range(0,8):
    s+=raw_input()
white=s.count('Q')*9+s.count('R')*5+s.count('B')*3+s.count('N')*3+s.count('P')
black=s.count('q')*9+s.count('r')*5+s.count('b')*3+s.count('n')*3+s.count('p')

if white > black: print "White"
elif white == black: print "Draw"
else: print "Black"