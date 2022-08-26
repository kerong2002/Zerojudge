#include<stdio.h>
int main(){
    char n[99]={'\0'};
    int size;
    scanf("%s%n",n,&size);
    int bonus=1;
    int count=0;
    for(int x=size-1;x>=0;x--){
        count+=bonus*(n[x]-'0');
        bonus*=9;
    }
    printf("%d",count);
    return 0;
}
