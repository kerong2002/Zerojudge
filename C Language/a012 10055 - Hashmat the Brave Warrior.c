#include<stdio.h>
int main(){
    long long int a,b,Survive;
    while(scanf("%lld %lld",&a,&b)!=EOF){
        if(a<b){
            a=a^b;
            b=a^b;
            a=a^b;
        }
        Survive=a-b;
        printf("%lld\n",Survive);
    }

    return 0;
}
