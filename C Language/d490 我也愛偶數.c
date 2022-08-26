#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    long long int sum=0;
    for(int x=a;x<=b;x++){
        if(x%2==0){
            sum+=x;
        }
    }
    printf("%lld",sum);
    return 0;
}
