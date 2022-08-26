#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        printf("%d\n",(1+n)*n/2);
    }
    return 0;
}
