#include<stdio.h>
//int fibonacci(int n){
//    if(n==1 || n==0)
//        return 1;
//    else{
//        return fibonacci(n-1)+fibonacci(n-2);
//    }
//}
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        long long int a=0,b=1;
        for(int x=0;x<n;x++){
            b=a+b;
            a=b-a;
        }
        printf("%lld\n",b);
    }
    return 0;
}
