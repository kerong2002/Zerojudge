#include<stdio.h>
int main(){
    int a,b,d;
    scanf("%d %d %d",&a,&b,&d);
    int s=(b-a)/d;
    for(int x=0;x<=s;x++){
        printf("%d ",a+x*d);
    }
    return 0;
}
