import math
# def isp(n):
# 	if n<2:
# 		return False
# 	if n<=3:
# 		return True
# 	if n%2 == 0 or n%3==0:
# 		return False

# 	N = int(math.sqrt(n))
# 	for i in range(5,N,6):
# 		if n%i == 0 or n%(i+2)==0:
# 			return False
# 	return True
def isp(n) : 
  
    # Corner cases 
    if (n <= 1) : 
        return False
    if (n <= 3) : 
        return True
  
    # This is checked so that we can skip  
    # middle five numbers in below loop 
    if (n % 2 == 0 or n % 3 == 0) : 
        return False
  
    i = 5
    while(i * i <= n) : 
        if (n % i == 0 or n % (i + 2) == 0) : 
            return False
        i = i + 6
  
    return True

#mat = [ [0,0,0], [0,0,0], [0,0,0]]
# def make(mat, sz):
# 	i,j = sz/2, sz/2

# 	count = 2
# 	cur = 3
# 	j += 1
# 	while cur <= sz:
		
# 		for k in xrange(cur-1):
# 			mat[i][j] = count
# 			#print i,j, count
# 			count += 1
# 			i -= 1
# 		i += 1
# 		j -= 1
# 		for k in xrange(cur-1):
# 			mat[i][j] = count
# 			#print i,j, count
# 			count += 1
# 			j -= 1
# 		j += 1
# 		i += 1
# 		for k in xrange(cur-1):
# 			mat[i][j] = count
# 			#print i,j, count
# 			count += 1
# 			i += 1
# 		i -= 1
# 		j += 1
# 		for k in xrange(cur-1):
# 			mat[i][j] = count
# 			#print i,j, count
# 			count += 1
# 			j += 1
# 		cur += 2
	
# 	# for x in xrange(sz):
# 	# 	for y in xrange(sz):
# 	# 		print((mat[x][y])),"\t",
# 	# 	print

# 	return mat
# cond = 0
# sz = 9005
# mat = [ [0 for _ in xrange(sz)] for _ in xrange(sz)]
# mat = make(mat, sz)

# cnt = 0
# cn = 0
# for i in xrange(sz):
# 	for j in xrange(sz):
# 		if i+j == sz-1 or i==j:
# 			if isp(mat[i][j]):
# 				cnt += 1
# 		else:
# 			cn += 1
# print sz,cnt,cn,(2*sz-1),(cnt*1.0)/(2*sz-1)
cur = 1
step= 2

np = 1
p = 0
while True:

	for _ in xrange(4):
		cur += step
		if isp(cur):
			p += 1
		else:
			np += 1

	v = (p*1.0)/(p+np)
	print p, np, v
	if v < 0.10:
		print p, np, (p+np), (p+np+1)/2
		break
		
	step += 2