import sys
sys.stdin=open("input.txt","r")
sys.stdout=open("output.txt","w")

while True:
	s = raw_input().split()

	if s[0][0] == "*":
		break
	f = True
	ch = s[0][0].lower()
	for st in s:
		if st.lower()[0] != ch:
			f = False
			break
	if f: print "Y"
	else: print "N"