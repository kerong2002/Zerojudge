#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int div_ans[9999];
int div_size[9999];
//================<強制轉成int>=====================
void change_int(char list[]){
    char save_int[9999]={'\0'};
    int ok=0;
    int cnt=0;
    for(int x=0;x<strlen(list);x++){
        if(list[x]!='0'){
            ok=1;
        }
        if(ok==1){
            save_int[cnt]=list[x];
            cnt+=1;
        }
    }
    memset(list,'\0',sizeof(char)*9999);
    strcpy(list,save_int);
}
//==================<除法翻轉>======================
void div_reverse(char list[]){
    char set[9999]={'\0'};
    int cnt=0;
    for(int x=strlen(list)-1;x>=0;x--){
        set[cnt]=list[x];
        cnt+=1;
    }
    memset(list,'\0',sizeof(char)*9999);
    strcpy(list,set);
}
//=================<除法的減法>===================
void div_sub(char first[],char change_second[]){
    char sub_result[9999]={'\0'};    //減法結果
    div_reverse(first);             //翻轉做減法
    div_reverse(change_second);     //翻轉做減法
    for(int x=0;x<9999;x++){
        if(first[x]=='\0' && change_second[x]=='\0'){
            break;                  //減法終止
        }
        else{
            if(first[x]>=change_second[x]){
                if(change_second[x]=='\0'){
                    sub_result[x]=first[x];
                }
                else{
                    sub_result[x]=first[x]-change_second[x]+'0';//被除數第x位夠減除數第x位
                }
            }
            else{
                sub_result[x]=10-change_second[x]+first[x]+'0';//借位
                int cnt=1;
                while(first[x+cnt]=='0'){                   //借位的那位等於0
                    first[x+cnt]+=9;
                    cnt+=1;                                 //多借到第幾位
                }
                first[x+cnt]-=1;
            }
        }
    }
    div_reverse(sub_result);                                //翻轉回來
    change_int(sub_result);                                 //轉成int
    memset(first,'\0',sizeof(char)*9999);
    strcpy(first,sub_result);
}
int main(){
    char first[9999]={'\0'};
    char second[9999]={'\0'};
    while(scanf("%s %s",first,second)!=EOF){
        int other=0;
        if((strlen(first)==strlen(second) &&strcmp(first,second)<0)|| strlen(first)<strlen(second)){
            other=1;
        }
        int old_first_size=strlen(first);
        int ans_size=old_first_size-strlen(second);
        int size=strlen(first)-strlen(second);
        char second_judge[9999]={'\0'};
        strcpy(second_judge,second);
        for(int x=0;x<size;x++){
            strcat(second_judge,"0");
        }
        int ok=1;
        if(strcmp(first,second_judge)>=0){
            ans_size+=1;
        }
        if(strlen(first)==strlen(second)&&strcmp(first,second)==0){
            printf("1    0\n");
            continue;
        }
        int decimal_zero=0;
        if(strlen(first)==strlen(second)&&strcmp(first,second)>0){
            size+=1;
        }
        int add=0;
        char change_second[9999]={'\0'};      //用來存(變化的除數)
        int run=0;
        if(first[0]=='0') change_int(first);  //強制轉型int
        if(second[0]=='0') change_int(second);//強制轉型int
        while((strlen(first)>strlen(second))||strcmp(first,second)>=0){      //被除數比除數大時要進行動作
            if((strlen(first)==strlen(second))&&strcmp(first,second)<0) break;//終止條件
            if((strlen(first)<strlen(second))){
                break;                       //被除數比除數小時，終止
            }
            int f_len=strlen(first);         //被除數長度
            int s_len=strlen(second);        //除數長度
            int can=1;                       //第一次判斷，做補0動作
            if(f_len>=s_len && can==1){
                strcpy(change_second,second);//用來存變動的除數
                for(int x=0;x<f_len-s_len;x++){
                    strcat(change_second,"0");
                }
            }
            if((strcmp(first,change_second)>=0) && strlen(change_second)>=strlen(second)){
                div_sub(first,change_second); //被除數大於變化的除數，進行除法的減法動作
            }
            else{
                change_second[strlen(change_second)-1]='\0';//如果不是，則清掉多的0
                div_sub(first,change_second);
            }
            div_size[run]=strlen(change_second);
            run+=1;
        }
        if(strlen(first)<strlen(second)){
            decimal_zero=strlen(change_second)-strlen(second);
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
        int run_set=0;
        for(int x=0;x<9999;x++){
            if(div_ans[x]==0){
                break;
            }
            else{
                run_set+=1;
            }
        }
        int range_size=0;
        if(size>run_set){
            range_size=size;
        }
        else{
            range_size=run_set;
        }
        if((strlen(first)==strlen(second) &&strcmp(first,second)<0)){
            range_size-=1;
        }
        for(int x=0;x<ans_size;x++){
            printf("%d",div_ans[x]);
        }
        if(other==1){
            printf("0");
        }
        printf("    ");

        if(strlen(first)==0){
            printf("0");
        }
        for(int x=0;x<strlen(first);x++){
            printf("%c",first[x]);
        }
        printf("\n");
        memset(div_ans,0,sizeof(int)*9999);
        memset(div_size,0,sizeof(int)*9999);
        memset(first,'\0',sizeof(char)*9999);
        memset(second,'\0',sizeof(char)*9999);
    }
    return 0;
}

