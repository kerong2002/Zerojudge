#include<stdio.h>
int main(){
    int n,k;
    while(scanf("%d %d",&n,&k)!=EOF){
        if(n==0){
            printf("Ok!\n");
            continue;
        }
        if(k==0){
            printf("Impossib1e!\n");
            continue;
        }
        printf("%s\n",(n%k==0)?"Ok!":"Impossib1e!");
    }
    return 0;
}
