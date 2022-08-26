#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char save[99]={'\0'};
    char number[20]={'\0'};
    scanf("%s",save);
    int pick=-1;
    int done=0;
    for(int x=0;x<strlen(save);x++){
        if(save[x]>='0'&&save[x]<='9'&&done==0){
            pick=0;
            done=1;
        }
        if(pick>=0){
            number[pick++]=save[x];
        }
    }
    int mul=atoi(number);
    int bonus=1;
    int count=0;
    for(int x=strlen(save)-pick-1;x>=0;x--){
        count+=bonus*(save[x]-'A'+1);
        bonus*=26;
    }
    printf("%d\n",count*mul);
    return 0;
}
