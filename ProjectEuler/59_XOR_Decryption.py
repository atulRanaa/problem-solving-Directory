import sys
sys.stdin = open("PrjectEulerP_59.txt",'r')

enc = [ int(x) for x in raw_input().split(",")]
print len(enc),len(enc)/3

l = len(enc)

dec = []
# for i in range(0,l,3):
# 	print enc[i], enc[i+1], enc[i+2]
cnt = 1
lar = 0
for a in xrange(97,123):
	for b in xrange(97,123):
		for c in xrange(97,123):
			dec = []
			for i in range(0,l-1,3):
				dec += [ (enc[i]^a) ]
				dec += [ (enc[i+1]^b)]
				dec += [ (enc[i+2]^c)]
			f = True

			num = 0
			for i in xrange(l-1):
				if (dec[i]>=65 and dec[i]<=90) or (dec[i]>=97 and dec[i]<=122):
					num += 1

			if num > lar:
				lar = num
				print lar,a,b,c

				s = ""
				ascii = 0
				for i in xrange(l-1):
					s += chr( dec[i])
					ascii += dec[i]
				s += chr( enc[1200]^a)
				ascii += (enc[1200]^a)
				print ascii, s
			cnt += 1
#print dec, len(dec)