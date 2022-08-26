
#include<stdio.h>
int main(){
    char list[99][99];
    int count=0;
    while(scanf("%s",&list[count])){
        if(getchar()=='\n') break;
        count++;
    }
    char say[99];
    scanf("%[^\n]%*c",say);
    for(int x=0;x<=count;x++){
        printf("%s, %s\n",say,list[x]);
    }
    return 0;
}
