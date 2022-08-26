#include<stdio.h>
int main(){
    int n,minus;
    while(scanf("%d",&n)!=EOF){
        int sum;
        minus=n-2;
        sum=n*n-minus;
        printf("%d\n",sum);
    }
    return 0;
}
