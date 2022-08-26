#include<stdio.h>
#include<string.h>
int main(){
    char save[99]={'\0'};
    while(scanf("%s",save)!=EOF){
        char garry[99]={'\0'};
        garry[0]=save[0];
        for(int x=1,cnt=1;x<strlen(save);x++,cnt++){
            garry[cnt]=(save[x]-'0')^(garry[x-1]-'0')+'0';
        }
        int count=0;
        int bonus=1;
        for(int x=strlen(garry)-1;x>=0;x--){
            count+=bonus*(garry[x]-'0');
            bonus*=2;
        }
        printf("%d\n",count);
    }
    return 0;
}
