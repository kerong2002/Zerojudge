#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n<0){
        int x=-n;
        printf("%d",x);
    }
    else{
        printf("%d",n);
    }
    return 0;
}
