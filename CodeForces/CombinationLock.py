a=input()
x=map(int,raw_input())
y=map(int,raw_input())
ans=0
for i in range(0,a):
	ans+=min(abs(x[i]-y[i]),10-abs(x[i]-y[i]))
print ans