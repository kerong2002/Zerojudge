#include<stdio.h>
#include<string.h>
int main(){
    char list[99]={'\0'};
    while(scanf("%[^\n]%*c",list)!=EOF){
        char *token=strtok(list," ");
        char name[99][99]={'\0'};
        int cnt=0;
        while(token!=NULL){
            strcpy(name[cnt],token);
            token=strtok(NULL," ");
            cnt+=1;
        }
        for(int x=0;x<cnt-1;x++){
            printf("%s little, ",name[x]);
        }
        printf("%s little Indians\n",name[cnt-1]);
    }
    return 0;
}
