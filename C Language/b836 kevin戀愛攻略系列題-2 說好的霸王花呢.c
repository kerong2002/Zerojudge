#include<stdio.h>
int main(){
    long int n,m;
    while(scanf("%ld %ld",&n,&m)!=EOF){
        if(m==0){
            printf("Go Kevin!!\n");
            continue;
        }
        long int divide=n/m;
        if(divide*m+1==n){
            printf("Go Kevin!!\n");
        }
        else{
            printf("No Stop!!\n");
        }
    }
    return 0;
}
