import sys 

#sys.stdin = open('input.txt', 'r')


n, t = map( int, raw_input().split())


def next_permutation(s):
  for i in reversed(xrange(len(s))):
    if s[i] > s[i-1]:
      break
  else:
    return []
  i -= 1
  for j in reversed(xrange(i + 1, len(s))):
    if s[j] > s[i]: break
  t = s[i]
  s[i] = s[j]
  s[j] = t
  s[i + 1:] = reversed(s[i + 1:])
  return s

#http://matteolandi.blogspot.com/2009/09/python-nextpermutation_13.html
for i in xrange(t):
	ar = [int(x) for x in raw_input().split() ]
	ar = next_permutation(ar)
	for ele in ar:
		print ele,
	print 