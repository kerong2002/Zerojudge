#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//================<強制轉成int>=====================
void change_int(char list[]){
    char save_int[20]={'\0'};
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
    memset(list,'\0',sizeof(char)*20);
    strcpy(list,save_int);
}
//==================<除法翻轉>======================
void div_reverse(char list[]){
    char set[20]={'\0'};
    int cnt=0;
    for(int x=strlen(list)-1;x>=0;x--){
        set[cnt]=list[x];
        cnt+=1;
    }
    memset(list,'\0',sizeof(char)*20);
    strcpy(list,set);
}
//=================<除法的減法>===================
void div_sub(char first[],char change_second[]){
    char sub_result[20]={'\0'};    //減法結果
    div_reverse(first);             //翻轉做減法
    div_reverse(change_second);     //翻轉做減法
    for(int x=0;x<20;x++){
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
    memset(first,'\0',sizeof(char)*20);
    strcpy(first,sub_result);
}
int main(){
    char first[20]={'\0'};
    while(scanf("%s",first)!=EOF){
        char second[20]={"3"};
        int f_len=strlen(first);
        int s_len=strlen(second);
        char change_second[20]={'\0'};      //用來存(變化的除數)
        while((strlen(first)>strlen(second))||strcmp(first,second)>=0){       //被除數比除數大時要進行動作
            if((strlen(first)==strlen(second))&&strcmp(first,second)<0) break;//終止條件
            if((strlen(first)<strlen(second))) break;                         //被除數比除數小時，終止
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


        }
        printf("%s\n",first[0]=='\0'||first[0]=='0'?"YES":"NO");
    }
    return 0;
}
