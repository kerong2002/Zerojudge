#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char a[99]={'\0'},b[99]={'\0'};
    scanf("%s%s",a,b);
    int bonus=1;
    int a_count=0;
    for(int x=strlen(a)-1;x>=0;x--){
        a_count+=bonus*(a[x]-'A'+1);
        bonus*=26;
    }
    bonus=1;
    int b_count=0;
    for(int x=strlen(b)-1;x>=0;x--){
        b_count+=bonus*(b[x]-'A'+1);
        bonus*=26;
    }
    printf("%d\n",abs(a_count-b_count)+1);
    return 0;
}
