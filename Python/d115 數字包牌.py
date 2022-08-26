def dfs(cnt,search,m,data,save):#dfs active
    if(cnt<m):
        save[cnt]=data[search]
        cnt+=1
        search+=1
        dfs(cnt,search,m,data,save)
        if(search<n-m+cnt):     #pick
            dfs(cnt-1,search,m,data,save)
    else:
        for i in range(m):      #done print save
            print(save[i],end=" ")
        print()

while True:
    line=list(map(int,input().split()))
    n=line[0]               #幾筆
    if n==0: break          #停止狀態
    data=[]
    save=[]
    x=0
    for i in range(n):
        save.append(0)      #配置儲存串列大小
    for i in range(1,len(line)-1):
        data.append(line[i])#資料
    m=line[len(line)-1]     #挑選數量
    data.sort()             #排序
    dfs(0,0,m,data,save)    #dfs