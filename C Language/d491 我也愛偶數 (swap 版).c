#include<stdio.h>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int MAX=max(a,b);
    int MIN=min(a,b);
    int sum=0;
    for(int x=MIN;x<=MAX;x++){
        if(x%2==0){
            sum+=x;
        }
    }
    printf("%d",sum);
    return 0;
}
