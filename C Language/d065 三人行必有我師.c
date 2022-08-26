#include<stdio.h>
int main(){
    int line[3]={0};
    int x=3;
    while(x--){
        scanf("%d",&line[x]);
    }
    int max=-1;
    for(int x=0;x<3;x++){
        if(line[x]>max){
            max=line[x];
        }
    }
    printf("%d",max);
    return 0;
}
