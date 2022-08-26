#include<stdio.h>
#include<string.h>
int main(){
    char text[101]={'\0'};
    char reverse[101]={'\0'};
    scanf("%s",text);
    int size=strlen(text);
    for(int i=size-1,j=0;i>=0;i--,j++){
        reverse[j]=text[i];
    }
    if(strcmp(reverse,text)==0){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}
