while True:
    try:
        line=list(map(str,input().split()))
        n1=int(line[0])
        operation=line[1]
        n2=int(line[2])
        if(operation=="+"):
            print(n1+n2)
        elif(operation=="-"):
            print(n1-n2)
        elif(operation=="*"):
            print(n1*n2)
        elif(operation=="/"):
            print(int(n1//n2))
    except:
        break