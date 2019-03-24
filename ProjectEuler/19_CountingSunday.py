import datetime
s = 0
for y in range(1901, 2001):
    for m in range(12):
        if datetime.date(y, m + 1, 1).weekday() == 6:
        	s += 1
print s