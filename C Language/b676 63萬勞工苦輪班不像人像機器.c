#include<stdio.h>
int main(){
    char name[6]={"UGYTI"};
    int n;
    while(scanf("%d",&n)!=EOF){
        printf("%c\n",name[n%5]);
    }
    return 0;
}
