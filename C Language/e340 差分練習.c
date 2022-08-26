#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    long long int old,now;
    scanf("%lld",&old);
    printf("%lld ",old);
    n--;
    while(n--){
        scanf("%lld",&now);
        printf("%lld ",now-old);
        old=now;
    }
    return 0;
}
