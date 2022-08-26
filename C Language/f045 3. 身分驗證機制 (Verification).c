#include<stdio.h>
#include<math.h>
int main(){
    char list[9];
    scanf("%s",list);
    char set[9];
    strcpy(set,list);
    for(int x=0;x<9;x++){
        char hold;
        for(int y=x+1;y<9;y++){
            if(set[x]<=set[y]){
                hold=set[x];
                set[x]=set[y];
                set[y]=hold;
            }
        }
    }
    int max=pow((set[0]-48),2)+pow((set[1]-48),2);
    int check=(list[8]-48)+(list[7]-48)*10+(list[6]-48)*100;
    printf("%s",max==check?"Good Morning!":"SPY!");
    return 0;
}
