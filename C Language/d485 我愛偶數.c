#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",abs(((b-a)+(a%2==0)+(b%2==0))/2));
    return 0;
}
