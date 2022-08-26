#include<stdio.h>
int main(){
    int n;
    int appear[30000]={0};
    scanf("%d",&n);
    int list[n];
    for(int x=0;x<n;x++){
        scanf("%d",&list[x]);
    }
    for(int y=0;y<n;y++){
        appear[list[y]]+=1;
    }
    int max=-1;
    for(int i=0;i<30000;i++){
        if(appear[i]==0) continue;
        else if(appear[i]>max){
            max=appear[i];
        }
    }
    for(int i=0;i<30000;i++){
        if(appear[i]==0) continue;
        else if(appear[i]==max){
            printf("%d %d\n",i,appear[i]);
        }
    }
    return 0;
}
