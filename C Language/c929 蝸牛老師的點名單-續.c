#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(){
    char title[9999]={'\0'};
    char pick[9999]={'\0'};
    char list[9999]={'\0'};
    while(scanf("%[^\n]%*c",pick)!=EOF){
        scanf("%[^\n]%*c",list);
        strcat(list,pick);          //終止定義
        char *name=list;            //定義成指標，做尋找動作
        char *set=pick;             //挑選
        char *find=strstr(name,set);//挑選目標
       // printf("%s\n",title);
        while(find!=NULL){
            find[0]='\0';           //定義找到為'\0'
            printf("%s\n",name);
            name=find+strlen(set);  //下一個搜尋目標位置
            find=strstr(name,set);
        }
    }
    return 0;
}
/*
範例一:
 ,
set  , p, set   ,
*/
