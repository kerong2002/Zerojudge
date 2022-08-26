#include<stdio.h>
int main(){
    int size;
    while(scanf("%d",&size)!=EOF){
        int cnt=1;
        int minus=0;
        for(int y=1;y<=size;y++){
            for(int x=1;x<=size;x++){
                if(y%2!=0){
                    printf(" %d",cnt++);
                    if(x==size) minus=cnt+size-1;
                }
                else if(y%2==0){
                    printf(" %d",minus--);
                    if(x==1) cnt+=size;
                }
            }
            printf("\n");
        }

    }

    return 0;
}
