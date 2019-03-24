import math
n = input()
primes = [0]*n
primes[0]=1
primes[1]=1
for i in range(2,int(math.sqrt(n))+1):
	for i in range(2*i,n,i): primes[i] = 1
s = 0
for i in range(n):
	if primes[i] == 0: s += i 
print s