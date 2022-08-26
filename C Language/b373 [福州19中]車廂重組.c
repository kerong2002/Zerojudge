#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int car[n];
    for(int x=0;x<n;x++){
        scanf("%d",&car[x]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        int hold;
        for(int j=i+1;j<n;j++){
            if(car[i]>car[j]){
                hold=car[i];
                car[i]=car[j];
                car[j]=hold;
                count+=1;
            }
        }
    }
    printf("%d",count);
    return 0;
}
