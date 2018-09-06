a,b = map(int, input().split())
x,y,z = map(int, input().split())
for i in range(0,x):
    a=a-2
for i in range(0,z):
    b=b-3
for i in range(0,y):
    a=a-1
    b=b-1
if a+b<0:
    print((a+b)*-1)
else:
    print(0)
