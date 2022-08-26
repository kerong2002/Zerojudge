#include<stdio.h>
int main(){
    int n,people;
    scanf("%d %d",&n,&people);
    if(people==0){
        printf("OK!");
    }
    else if(n%people==0){
        printf("OK!");
    }
    else{
        printf("%d",n%people);
    }

    return 0;
}
