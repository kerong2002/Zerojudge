#include<stdio.h>
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        if(n<=10){
            printf("%d\n",n*6);
        }
        else if(n>=11 && n<=20){
            printf("%d\n",(n-10)*2+60);
        }
        else if(n>21 && n<=40){
            printf("%d\n",(n-20)*1+80);
        }
        else{
            printf("%d\n",100);
        }
    }
    return 0;
}
