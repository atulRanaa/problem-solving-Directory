import sys
sys.stdin=open('input.txt','r')
sys.stdout=open('output.txt','w')

n = input()
for _ in range(n):
	num = input()
	if num&1 == 0:
		binary = bin(num)[2:][::-1]
		print int(binary,2)
	else:
		print num