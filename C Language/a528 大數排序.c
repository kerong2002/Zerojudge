#include<stdio.h>
#include<string.h>
#include<memory.h>
char list[1000][1000];
char P_list[1000][1000];
char N_list[1000][1000];
int main(){
    int count;
    while(scanf("%d",&count)!=EOF){
        int negative_cnt=0;
        int positive_cnt=0;
        for(int t=0;t<count;t++){
            scanf("%s",&list[t]);
        }
        for(int x=0;x<count;x++){
            if(list[x][0]==45){
                strcpy(N_list[negative_cnt],list[x]);
                negative_cnt++;
            }
            else{
                strcpy(P_list[positive_cnt],list[x]);
                positive_cnt++;
            }
        }
        /*正數*/
        for(int x=0;x<positive_cnt;x++){
            char hold[1000]={'\0'};
            for(int y=x+1;y<positive_cnt;y++){
                if(((strlen(P_list[x]))>(strlen(P_list[y])))){
                    strcpy(hold,P_list[x]);
                    strcpy(P_list[x],P_list[y]);
                    strcpy(P_list[y],hold);
                }
            }
        }
        for(int x=0;x<=positive_cnt;x++){
            char hold[1000]={'\0'};
            for(int y=x+1;y<=positive_cnt;y++){
                if((strlen(P_list[x]))==(strlen(P_list[y]))){
                    int done[strlen(P_list[x])];
                    for(int i=strlen(P_list[x]);i>=0;i--){
                        if(P_list[x][i]>P_list[y][i]){
                            strcpy(hold,P_list[x]);
                            strcpy(P_list[x],P_list[y]);
                            strcpy(P_list[y],hold);
                        }
                    }
                }
            }
        }
                    /*負數*/
        for(int x=0;x<negative_cnt;x++){
            char hold[1000]={'\0'};
            for(int y=x+1;y<negative_cnt;y++){
                if(((strlen(N_list[x]))<(strlen(N_list[y])))){
                    strcpy(hold,N_list[x]);
                    strcpy(N_list[x],N_list[y]);
                    strcpy(N_list[y],hold);
                }
            }
        }
        for(int x=0;x<negative_cnt;x++){
            char hold[1000]={'\0'};
            for(int y=x+1;y<negative_cnt;y++){
                if((strlen(N_list[x]))==(strlen(N_list[y]))){
                    for(int i=strlen(N_list[x]);i>0;i--){
                        if(N_list[x][i]<N_list[y][i]){
                            strcpy(hold,N_list[x]);
                            strcpy(N_list[x],N_list[y]);
                            strcpy(N_list[y],hold);
                        }
                    }
                }
            }
        }
//        printf("排序後\n");
        for(int x=0;x<negative_cnt;x++){
            printf("%s\n",N_list[x]);
        }
        for(int x=0;x<positive_cnt;x++){
            printf("%s\n",P_list[x]);
        }
    }

    return 0;
}
