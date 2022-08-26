//大數運算 2022-03-01 陳科融
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<memory.h>
#include<stdbool.h>
char first[999]={'\0'};
char second[999]={'\0'};
int borrow=10,carry=0;
int f_size;
int s_size;
int div_ans[999];
int div_size[999];
void div_reverse(char list[]){
    char set[999]={'\0'};
    for(int x=strlen(list)-1,cnt=0;x>=0;x--){
        set[cnt]=list[x];
        cnt+=1;
    }
    memset(list,'\0',sizeof(char)*999);
    strcpy(list,set);
}
void change_int(char list[]){
    char save_int[999]={'\0'};
    int ok=0;
    for(int x=0,cnt=0;x<strlen(list);x++){
        if(list[x]!='0') ok=1;
        if(ok==1){
            save_int[cnt]=list[x];
            cnt+=1;
        }
    }
    memset(list,'\0',sizeof(char)*999);
    strcpy(list,save_int);
}
void change(char change[],char list[]){
    int size=strlen(list);
    for(int x=0;x<size;x++){
        change[x]=list[x];
    }
}
void reverse(char list[],char rev[]){
    int cnt=0;
    for(int x=strlen(list)-1;x>=0;x--){
        rev[cnt]=list[x];
        cnt+=1;
    }
}
int add(char first[],char second[],int answer[]){
    int run=0;
    int f_size=strlen(first);
    int s_size=strlen(second);
    for(int x=0;x<9999;x++){
        if(first[x]=='\0' && second[x]=='\0' && carry ==0){
            return run;
        }
        else{
            if(first[x]>='0'){
                first[x]=first[x]-'0';
            }
            if(second[x]>='0'){
                second[x]=second[x]-'0';
            }
            answer[x]=(first[x]+second[x]+carry)%10;
            carry=(first[x]+second[x]+carry)/10;
            run+=1;
        }
    }
}
int minus(char first[],char second[],int answer[]){
    int run=0;
    int f_size=strlen(first);
    int s_size=strlen(second);
    for(int x=0;x<999;x++){
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
void multiply(char first[],char second[],int answer[]){
    int carry=0;
    int f_size=strlen(first);
    int s_size=strlen(second);
    int max_size=f_size+s_size;
    int **save=(int **)calloc(999,sizeof(int*));
    for(int x=0;x<max_size;x++){
        save[x]=(int *)calloc(999,sizeof(int));
    }
    for(int x=0;x<f_size;x++){
        for(int y=0;y<s_size;y++){
            save[x][y]=((first[x]-'0')*(second[y]-'0'));
        }
    }
    for(int x=0;x<f_size;x++){
        int cnt=0;
        for(int y=x;y<max_size;y++){
            if(cnt==s_size){
                continue;
            }
            else{
                answer[y]+=save[x][cnt];
                cnt+=1;
            }
        }
    }
    for(int x=0;x<max_size;x++){
        if(answer[x]>=10){
            carry=answer[x]/10;
            answer[x]%=10;
            answer[x+1]+=carry;
        }
    }
    int ok=0;
    for(int x=max_size;x>=0;x--){
        if(answer[x]!=0){
            ok=1;
        }
        if(ok==1){
            printf("%d",answer[x]);
        }
    }

    for(int i=0;i<999;i++){
        free(save[i]);
    }
    free(save);
}
void div_sub(char first[],char change_second[]){
    char sub_result[999]={'\0'};
    div_reverse(first);
    div_reverse(change_second);
    for(int x=0;x<999;x++){
        if(first[x]=='\0' && change_second[x]=='\0'){
            break;
        }
        else{
            if(first[x]>=change_second[x]){
                if(change_second[x]=='\0'){
                    sub_result[x]=first[x];
                }
                else{
                    sub_result[x]=first[x]-change_second[x]+'0';
                }
            }
            else{
                sub_result[x]=10-change_second[x]+first[x]+'0';
                int cnt=1;
                while(first[x+cnt]=='0'){
                    first[x+cnt]+=9;
                    cnt+=1;
                }
                first[x+cnt]-=1;
            }
        }
    }
    div_reverse(sub_result);
    change_int(sub_result);
    memset(first,'\0',sizeof(char)*999);
    strcpy(first,sub_result);
}
int main(){
    char operation[1];
    while(scanf("%s%s%s",first,&operation[0],second)!=EOF){
        char R_first[999]={'\0'};
        char R_second[999]={'\0'};
        char change_f[999]={'\0'};
        char change_s[999]={'\0'};
        char div[999]={'\0'};
        int *answer=(int *)calloc(999,sizeof(int));
        reverse(first,R_first);
        reverse(second,R_second);
        if(operation[0]=='+'){
            int run=add(R_first,R_second,answer);
            for(int x=run-1;x>=0;x--){
                printf("%d",answer[x]);
            }
        }
        if(operation[0]=='-'){
            f_size=strlen(first);
            s_size=strlen(second);
            if(f_size>s_size){
                int run=minus(R_first,R_second,answer);
                for(int x=run-1;x>=0;x--){
                    printf("%d",answer[x]);
                }
            }
            else if(f_size==s_size){
                int not_big=0;
                for(int x=0;x<f_size;x++){
                    if(first[x]>second[x]){
                        break;
                    }
                    else if(first[x]==second[x]){
                        continue;
                    }
                    else{
                        not_big=1;
                    }
                }
                if(not_big==1){
                    change(change_f,R_second);
                    change(change_s,R_first);
                    int run=minus(change_f,change_s,answer);
                    printf("-");
                    int ok=0;
                    for(int x=run-1;x>=0;x--){
                        if(answer[x]!=0) ok=1;
                        if(ok==1) printf("%d",answer[x]);
                    }
                }
                else{
                    int run=minus(R_first,R_second,answer);
                    int ok=0;
                    for(int x=run-1;x>=0;x--){
                        if(answer[x]!=0) ok=1;
                        if(ok==1) printf("%d",answer[x]);
                        if(x==0 && ok==0) printf("0");
                    }
                }
            }
            else if(f_size<s_size){
                change(change_f,R_second);
                change(change_s,R_first);
                int run=minus(change_f,change_s,answer);
                printf("-");
                for(int x=run-1;x>=0;x--) printf("%d",answer[x]);
            }
        }
        if(operation[0]=='*'){
            reverse(first,R_first);
            reverse(second,R_second);
            multiply(R_first,R_second,answer);
        }
        if(operation[0]=='/'){
            int run=0;
            char change_second[999]={'\0'};
            char save_change[999]={'\0'};
//            div_run=0;
            if(first[0]=='0') change_int(first);
            if(second[0]=='0') change_int(second);
            if(strlen(first)<strlen(second)){
                printf("0\n");
                continue;
            }
            while((strlen(first)>strlen(second))||strcmp(first,second)>=0){
                if((strlen(first)==strlen(second))&&strcmp(first,second)<0) break;//終止條件
                if((strlen(first)<strlen(second))) break;
                int f_len=strlen(first);
                int s_len=strlen(second);
                int can=1;
                if(f_len>=s_len && can==1){
                    strcpy(change_second,second);
                    for(int x=0;x<f_len-s_len;x++){
                        strcat(change_second,"0");
                    }
                }
                if((strcmp(first,change_second)>=0) && strlen(change_second)>=strlen(second)){
                    div_sub(first,change_second);
                }
                else{
                    change_second[strlen(change_second)-1]='\0';
                    div_sub(first,change_second);
                }
                div_size[run]=strlen(change_second);
                run+=1;
            }
            int max=div_size[0];
            int cnt=0;
            int ans_run_size=0;
            for(int x=0;x<run;x++){
                if(max==div_size[x]){
                    div_ans[cnt]+=1;
                }
                else{
                    int minus=max-div_size[x];
                    cnt+=minus;
                    div_ans[cnt]++;
                    max=div_size[x];
                    ans_run_size+=minus;
                }
            }
            for(int x=0;x<=ans_run_size;x++){
                printf("%d",div_ans[x]);
            }
        }
        printf("\n");
        memset(div_ans,0,sizeof(int)*999);
        memset(R_first,'\0',sizeof(char)*999);
        memset(R_second,'\0',sizeof(char)*999);
        free(answer);
    }
    return 0;
}
