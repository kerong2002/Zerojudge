#include<stdio.h>
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        printf("%d\n",n%2?n-1:n);
    }
    return 0;
}
