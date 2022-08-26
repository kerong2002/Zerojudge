#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

int main(){
    char password[99];
    bool answer[6];
    for(int x=0;x<=5;x++){
        answer[x]=true;
    }
    bool not_OK=true;
    scanf("%s",password);
    int size=strlen(password);
//--------condition_1--------
    for(int x=0;x<size;x++){
        if(password[x]!='0' && password[x]!='1'){
            answer[1]=false;
        }
    }
//---------------------------

//--------condition_2--------
    if(size<8 || size>12){
        answer[2]=false;
    }
//---------------------------

//--------condition_3--------
    int count_0=0;
    for(int x=0;x<size;x++){
        if(password[x]=='0'){
            count_0+=1;
        }
    }
    if(count_0<2){
        answer[3]=false;
    }
//---------------------------

//--------condition_4--------
    int count_1=0;
    for(int x=0;x<size;x++){
        if(password[x]=='1'){
            count_1+=1;
        }
    }
    if(count_1<3){
        answer[4]=false;
    }
//---------------------------

//--------condition_5--------
    if(strstr(password,"101")==0){
        answer[5]=false;
    }
//---------------------------
    for(int x=1;x<=5;x++){
        if(answer[x]==false){
            printf("%d ",x);
            not_OK=false;
        }
    }
    if(not_OK==true) printf("0");
    return 0;
}
