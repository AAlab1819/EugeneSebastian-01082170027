n,k = map(int, input().split())
a = [int(x) for x in input().split()]
b = a[:]
c = []
count = 1
copy = True
while copy is True:
    for i in range(0,n):
        for j in range(0,n):
            try:
                if (b[i]==b[j] and i != j):
                    del b[j]
            except:
                break
    copy = False
    for i in range(0,n):
        for j in range(0,n):
            try:
                if (b[i] == b[j] and i != j):
                    copy = True
            except:
                copy = False
try:
    if (b[0] == b[1]):
        print('No')
        count = 2
except:
    pass  
if count != 2:
    if len(b) < k:
        print('No')
    else:
        print('Yes')
        for i in range(0,k):
            c.append(a.index(b[i])+1)
        c.sort()
        for i in range(0,k):
            print(c[i], end=" ")
