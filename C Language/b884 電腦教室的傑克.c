#include<stdio.h>
#include<math.h>
int main(){
    int n,x,y,yee;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&x,&y);
        yee=100-x-y;
        if(yee>0 && yee<=30){
            printf("sad!");
        }
        else if(yee>30 && yee<=60){
            printf("hmm~~");
        }
        else if(yee>60 && yee<100){
            printf("Happyyummy");
        }
        else{
            printf("evil!!");
        }
        printf("\n");
    }
    return 0;
}
