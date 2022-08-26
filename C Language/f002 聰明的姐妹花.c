#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int N;
    while(scanf("%d",&N)!=EOF){
        char save[20]={'\0'};
        while(N--){
            scanf("%s",save);
            if(save[0]>='A' &&save[0]<='Z'){
                int bonus=1;
                int count=0;
                for(int x=strlen(save)-1;x>=0;x--){
                    count+=bonus*(save[x]-'A'+1);
                    bonus*=26;
                }
                printf("%d\n",count);
            }
            else{
                int pick=atoi(save);
                char list[26]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
                int out[20]={0};
                int cnt=0;
                while(pick){
                    out[cnt++]=(pick-1)%26;
                    pick=(pick-1)/26;
                }
                for(int x=cnt-1;x>=0;x--){
                    printf("%c",list[out[x]]);
                }
                puts("");
            }
        }
    }
    return 0;
}
