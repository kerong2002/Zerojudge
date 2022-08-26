#include<stdio.h>
#include<string.h>
int main(){
    int width,time;
    char main[99]={'\0'};
    scanf("%d%*c",&width);
    scanf("%[^\n]%*c",main);
    scanf("%d",&time);
    char set[99]={'\0'};
    char reverse[99]={'\0'};
    for(int x=time-width,count=0;x<=time;x++,count++){
        if(x<0){
            reverse[count]=' ';
            continue;
        }
        if(main[x]=='\0'){
            reverse[count]=' ';
        }
        else{
            reverse[count]=main[x];
        }
    }
    for(int x=0;x<width;x++){
        printf("%c",reverse[x]);
    }
    return 0;
}
