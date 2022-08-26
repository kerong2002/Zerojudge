#include<stdio.h>
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        int sum=0;
        printf("%d\n",(n*n-n+2) / 2);
    }

    return 0;
}
