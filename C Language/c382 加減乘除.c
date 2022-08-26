#include<stdio.h>
#include <string.h>
int main(){
    int a,b;
    char active;
    while(scanf("%d %c %d",&a,&active,&b)!=EOF){
        switch(active){
        case'+':
            printf("%d\n",a+b);
            break;
        case'-':
            printf("%d\n",a-b);
            break;
        case'*':
            printf("%d\n",a*b);
            break;
        case'/':
            printf("%d\n",a/b);
            break;
        }
    }
    return 0;
}
