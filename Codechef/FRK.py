n = input()
str = ["ch","he","ef","che","hef","chef"]
count = 0
for _ in range(n):
	s = raw_input()
	for st in str:
		if st in s:
			count += 1
			break
print count
