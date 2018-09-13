n= input()
a = [int(n) for n in input().split()]
for i in range(0,int(n)):
    for j in range(0,int(n)):
        if (a[i] < a[j]):
            temp = a[j]
            a[j] = a[i]
            a[i] = temp
low = a[0]
high = a[int(n)-1]
low_count = 0
high_count = 0
for i in range(0,int(n)):
    if ( a[i] == low ):
        low_count+=1
    elif (a[i] == high ):
        high_count+=1
if ( low == high ):
    print("0")
else:
    print( int(n) - low_count - high_count)

            
