while True:
    range1=input()
    i,j=map(int,range1.split())
    max_length=0
    for run in range(i,j+1):
        cout_time=0
        savechange = run
        while(savechange!=1):
            if(savechange%2==0):
                savechange/=2
                cout_time+=1
            else:
                savechange=3*savechange+1
                cout_time+=1
        if(cout_time>max_length):
            max_length=cout_time
    print("{} {} {}".format(i,j,max_length+1))
