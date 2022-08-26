#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char save[999]={'\0'};
    while(scanf("%[^\n]%*c",save)!=EOF){
        if(strlen(save)==2 &&save[0]=='-'){
            break;
        }
        int cnt=0;
        char cut[999][99]={'\0'};
        char *pick=strtok(save," ");
        while(pick!=NULL){
            strcpy(cut[cnt++],pick);
            pick=strtok(NULL," ");
        }
        int *list=(int *)calloc(cnt,sizeof(int));
        int *rev=(int *)calloc(cnt,sizeof(int));
        for(int x=0;x<cnt;x++){
            list[x]=atoi(cut[x]);
        }
        int number=1;
        for(int x=0;x<cnt;x++){
            int run=0;
            for(int t=0;t<cnt;t++){
                if(rev[t]==0){
                    if(run==list[x]){
                        rev[t]=number++;
                        break;
                    }
                    run+=1;
                }

            }
        }
        for(int x=0;x<cnt;x++){
            printf("%d ",rev[x]);
        }
        printf("\n");
        free(list);
        free(rev);
    }
    return 0;
}
