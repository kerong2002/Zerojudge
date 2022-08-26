//大數運算 2022-03-01 陳科融
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<memory.h>
#include<stdbool.h>
char first[10001]={'\0'};
char second[10001]={'\0'};
int borrow=10,carry=0;
int f_size;
int s_size;
//===================<翻轉>=====================
void reverse(char list[],char rev[]){
    int cnt=0;
    for(int x=strlen(list)-1;x>=0;x--){
        rev[cnt]=list[x];
        cnt+=1;
    }
}
//==================<減法>=========================
int minus(char first[],char second[],int answer[]){
    int run=0;
    int f_size=strlen(first);
    int s_size=strlen(second);
    for(int x=0;x<10001;x++){
        if(first[x]=='\0' && second[x]=='\0'){
            return run;
        }
        else{
            if(first[x]>='0'){
                first[x]=first[x]-'0';
            }
            if(second[x]>='0'){
                second[x]=second[x]-'0';
            }
            if(first[x]>=second[x]){
                answer[x]=first[x]-second[x];
                run+=1;
            }
            else if(first[x]<second[x]){
                answer[x]=borrow-second[x]+first[x];
                int cnt=1;
                while(first[cnt+x]=='0'){
                    first[cnt+x]+=9;
                    cnt+=1;
                }
                first[x+cnt]-=1;
                run+=1;
            }
        }
    }
}
//===================<主程式>=====================
int main(){
    char operation[1];
    while(scanf("%s",first)!=EOF){
        char R_first[10001]={'\0'};
        char R_second[10001]={'\0'};
        char div[10001]={'\0'};
        int *answer=(int *)calloc(10001,sizeof(int));
//==================<減法動作>=====================
        second[0]='1';
        f_size=strlen(first);
        s_size=strlen(second);
        if(f_size>=s_size){//減數遠比被減數大
            reverse(first,R_first);
            reverse(second,R_second);
            int run=minus(R_first,R_second,answer);
            int zero=0;
            for(int x=run-1;x>=0;x--){
                if(answer[x]!=0){
                    zero=1;
                }
                if(zero==1){
                    printf("%d",answer[x]);
                }
            }
        }
        printf("\n");
        memset(first,'\0',sizeof(char)*10001);
        memset(second,'\0',sizeof(char)*10001);
        memset(R_first,'\0',sizeof(char)*10001);
        memset(R_second,'\0',sizeof(char)*10001);
        free(answer);
    }
    return 0;
}
