#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int a,b,size;
    while(scanf("%d %d %d",&a,&b,&size)!=EOF){
        printf("%d.",a/b);
        int sum=a%b;
        for(int x=0;x<size;x++){
            sum*=10;
            printf("%d",sum/b);
            sum%=b;
        }
        printf("\n");
    }
    return 0;
}
