n , m = map(int, raw_input().split())
x = n/m
y = n%m
min = (x*(x+1)/2)*y + ((x-1)*x/2)*(m-y)
max = (n-m)*(n-m+1)/2
print min,max