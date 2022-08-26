#include<stdio.h>
#include<stdlib.h>
int english[26];
int main(){
    int N,pick;
    char word;
    while(scanf("%d %d",&N,&pick)!=EOF){
        char *set=(char *)calloc(N,sizeof(char));
        char *list=(char *)calloc(N,sizeof(char));
        scanf("%s",set);
    //-------------<計數>-----------------
        for(int x=0;x<N;x++){
            english[set[x]-65]+=1;
        }
    //------------------------------------
    //----------<印出陣列>----------------
        int count=0;
        int x=0;
        while(x<26){
            if(english[x]>0){
                list[count]=x+65;
                count+=1;
                english[x]-=1;
            }
            else if(english[x]==0){
                x+=1;
            }
        }
    //------------------------------------
        int choose;
        for(int x=0;x<pick;x++){
            scanf("%d",&choose);
            printf("%c",list[choose-1]);
        }
        printf("\n");
        free(list);
        free(set);
    }
    return 0;
}
/*
20 4
KFGHTHZHJKGXAKMCNHTE
5 1 15 3
*/
