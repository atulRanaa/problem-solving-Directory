

pow10 = []
res = 1
for i in xrange(0,1000):
	pow10 += [res]
	res *= 10

# for e in pow10: print e
# print pow10[0], pow10[999]


def testIfMultipleOfTen(n):
	i = 1
	j = 1000
	f = False

	while(i < j):
		if ( pow10[i] % n == 0):
			f = True
			break

		i += 1
	if(f):
		return i
	else:
		val = pow10[999]
		k = 999
		while(val%n == 0):
			k += 1
			val *= 10
		return k


# from random import seed
# from random import randint
# seed(1)
# for i in xrange(1,10000000):
	# val = i
	# val = randint(1000000,1000000000)
	# power = testIfMultipleOfTen(val)

	# if(power != -1): print val,"*",pow10[power]/val,"= 10 ^",power

def binaryExponentiation(n, m, MOD):
	res = 1
	n %= MOD

	while(m > 0):
		if(m&1): res = (res*n) % MOD
		n = (n*n) % MOD
		m >>= 1
	return res

t = input()
for _ in xrange(t):
	n, m, k = map(int, raw_input().split(" "))
	# print n,m,k

	ind = testIfMultipleOfTen(n)
	N = pow10[ind]/n

	MOD = pow10[k]
	lastKDigit = binaryExponentiation(N, m, MOD)

	fomatter = "{:0" + str(k) + "d}"
	print N
	print fomatter.format(lastKDigit)

