#include<stdio.h>
#include<string.h>
int main(){
    char list[1000000];
    int count[26]={0};
    scanf("%s",&list);
    int size=strlen(list);
    for(int x=0;x<size;x++){
        count[list[x]-'A']+=1;
    }

    for(int x=0;x<26;x++){
        for(int y=0;y<count[x];y++){
            printf("%c",x+'A');
        }
    }
    return 0;
}
