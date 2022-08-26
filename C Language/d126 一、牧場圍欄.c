#include<stdio.h>
#define perimeter(a,b) (2*a+2*b)
int main(){
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF){
        printf("%d\n",perimeter(a,b));
    }
    return 0;
}
