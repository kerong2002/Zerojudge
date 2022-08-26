#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char sentence[999]={'\0'};
	while(scanf("%[^\n]%*c",sentence)!=EOF){
		char list[999][999]={'\0'};
		char *pick=strtok(sentence," ");
		int cnt=0;
		while(pick!=NULL){
            strcpy(list[cnt++],pick);
            pick=strtok(NULL," ");
		}
		for(int y=0;y<cnt;y++){
            for(int x=strlen(list[y])-1;x>=0;x--){
                printf("%c",list[y][x]);
            }
            printf(" ");
		}
		puts("");
	}
	return 0;
}

