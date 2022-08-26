#include<stdio.h>
int gcd(int a,int b){
    if(!b) return a;
    else{
        return gcd(b,a%b);
    }
    return 0;
}

int main(){
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF){
        printf("%d\n",gcd(a,b));
    }
    return 0;
}
