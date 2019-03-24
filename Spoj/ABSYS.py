for i in range(input()):
	blank = raw_input()
	equ = raw_input().split()
	# [num,+,num,=,num]
	if("machula" in equ[0]):
		equ[0] = str(int(equ[4])-int(equ[2]))
	elif "machula" in equ[2]:
		equ[2] = str(int(equ[4])-int(equ[0]))
	else:
		equ[4] = str(int(equ[0])+int(equ[2]))
	print " ".join(equ)