#include<stdio.h>
#include<stdlib.h>
int call(int x){
    if(x==1){
        return 1;
    }
    else{
        if(x%2==0){
            return call(x/2);
        }
        else{
            return call(x-1)+call(x+1);
        }

    }
}
int main(){
    int x;
    scanf("%d",&x);
    printf("%d",call(x));
    return 0;
}
