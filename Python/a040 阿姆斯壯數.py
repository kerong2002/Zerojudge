line=list(map(int,input().split()))
n=line[0]
m=line[1]
bad=True
for i in range (n,m+1):
    text=str(i)
    size=len(str(i))
    sum=0
    for j in text:
        sum+=int(j)**size
    if (sum==i):
        bad = False
        print(sum,end=' ')
if (bad):
    print('none')