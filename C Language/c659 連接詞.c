#include<stdio.h>
int main(){
    char list[99][99];
    int count=0;
    while(scanf("%s",&list[count])!=EOF){
        count++;
    }
    for(int x=1;x<count;x++){
        if(x!=count-1){
            printf("%s %s ",list[x],list[0]);
        }
        else{
            printf("%s",list[x]);
        }
    }

    return 0;
}
