#include<stdio.h>
int main(){
    char girl[99]={'\0'};
    char boy[99]={'\0'};
    while(scanf("%[^\n]%*c%[^\n]%*c",girl,boy)!=EOF){
        printf("%s and %s sitting in the tree\n",girl,boy);
    }
    return 0;
}
