#include<stdio.h>
#include<stdlib.h>
#define max(a,b) ((a)>(b)?(a):(b))
int main(){
    int run;
    scanf("%d",&run);
    int list[run][3][4];
    for(int set=0;set<run;set++){
        list[set][0][0]=0;
        list[set][0][1]=1;
        list[set][0][2]=0;
        list[set][0][3]=0;
        list[set][1][0]=5;
        list[set][1][1]=4;
        list[set][1][2]=2;
        list[set][1][3]=3;
        list[set][2][0]=0;
        list[set][2][1]=6;
        list[set][2][2]=0;
        list[set][2][3]=0;
    }
    int m;
    scanf("%d",&m);
    while(m--){
        int number[4]={0};
        int set,active;
        scanf("%d %d",&set,&active);
        set=set-1;
        if(active==-1){
            int temp[4]={0};
            for(int x=0;x<3;x++){
                temp[x]=list[set][x][1];
            }
            temp[3]=list[set][1][3];
            list[set][0][1]=temp[3];
            list[set][1][1]=temp[0];
            list[set][2][1]=temp[1];
            list[set][1][3]=temp[2];
        }
        else if(active==-2){
            int temp[4]={0};
            for(int x=0;x<4;x++){
                temp[0]=list[set][0][1];
                temp[1]=list[set][1][2];
                temp[2]=list[set][2][1];
                temp[3]=list[set][1][0];
            }
            list[set][0][1]=temp[3];
            list[set][1][2]=temp[0];
            list[set][2][1]=temp[1];
            list[set][1][0]=temp[2];
        }
        else if(active>0){
            int temp=0;
            for(int y=0;y<3;y++){
                for(int x=0;x<4;x++){
                    temp=list[set][y][x];
                    list[set][y][x]=list[active-1][y][x];
                    list[active-1][y][x]=temp;
                }
            }
        }
    }
    for(int x=0;x<run;x++){
        printf("%d ",list[x][0][1]);
    }
    return 0;
}
