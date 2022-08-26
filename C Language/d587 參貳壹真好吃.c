#include<stdio.h>
int main(){
    int n,number;
    int list[4]={0};
    scanf("%d",&n);
    for(int x=0;x<n;x++){
        scanf("%d",&number);
        switch(number){
            case 1:
                list[1]+=1;
                break;
            case 2:
                list[2]+=1;
                break;
            case 3:
                list[3]+=1;
                break;
        }
    }
    for(int y=1;y<=3;y++){
        for(int x=1;x<=list[y];x++){
            printf("%d ",y);
        }
    }
    return 0;
}
