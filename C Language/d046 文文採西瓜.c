#include<stdio.h>
int main(){
    int n,save;
    scanf("%d",&n);
    char cnt='\n';
    while(n--){
        scanf("%d",&save);
        if(save<=10){
            cnt+=1;
        }
    }
    printf("%d",cnt-'\n');
    return 0;
}
