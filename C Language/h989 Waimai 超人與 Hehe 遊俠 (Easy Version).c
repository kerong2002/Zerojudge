#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main(){
    int n,input;
    scanf("%d",&n);
    int cnt=0;
    int check=0;
    while(n--){
        scanf("%d",&input);
        if(input&&check==0){
            check=1;
            cnt+=1;
        }
        else{
            check=0;
        }
    }
    printf("%d\n",cnt);
    return 0;
}
