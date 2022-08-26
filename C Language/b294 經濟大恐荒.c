#include<stdio.h>
int main(){
    int n,sum=0,manyN;
    scanf("%d",&n);
    for(int x=1;x<=n;x++){
        scanf("%d",&manyN);
        sum+=x*manyN;
    }
    printf("%d",sum);
}
