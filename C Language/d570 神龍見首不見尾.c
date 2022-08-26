#include<stdio.h>
int main(){
    long long int list;
    scanf("%lld",&list);
    while(list>0){
        printf("%lld\n",list);
        list/=10;
    }
    return 0;
}
