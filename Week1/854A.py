n=int(input())
b=n-1
a=1
while(b>a):
    a+=1
    b-=1
    if b==a:
        b-=1
        a+=1
if b%2==0 and a%2==0:
    a+=1
    b-=1
print('{} {}'.format(b,a))
