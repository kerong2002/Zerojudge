#include<stdio.h>
#include<string.h>
int main(){
    char list[99];
    scanf("%[^\n]%*c",list);
    int size=strlen(list);
    for(int x=0;x<size;x++){
        if(x!=size-1){
            printf("%d_",list[x]);
        }
        else{
            printf("%d",list[x]);
        }
    }
    return 0;
}
