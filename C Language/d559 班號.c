#include<stdio.h>
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        printf("'C' can use printf(\"%%d\",n); to show integer like %d\n",n);
    }
    return 0;
}
