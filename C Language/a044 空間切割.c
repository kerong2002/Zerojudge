#include<stdio.h>
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        printf("%d\n",1+(n*(n*n+5))/6);
    }
    return 0;
}
