#include<stdio.h>
int main(){
    int n,k,w,count,get;
    scanf("%d %d %d",&n,&k,&w);
    count=n;
    while(n/k){
        get=(n/k)*w;
        count+=get;
        n=get+n%k;
    }
    printf("%d",count);
    return 0;
}
