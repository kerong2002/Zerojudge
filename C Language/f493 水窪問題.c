#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int small=999;
int big=-1;
int N,M,area;
void floodfill(char **map,int y,int x){
    map[y][x]='#';
    area+=1;
    if(x>0 && map[y][x-1]=='W'){
        floodfill(map,y,x-1);//往西
    }
    if(y>0 && map[y-1][x]=='W'){
        floodfill(map,y-1,x);//往北
    }
    if(x<N-1 && map[y][x+1]=='W'){
        floodfill(map,y,x+1);//往東
    }
    if(y<M-1 && map[y+1][x]=='W'){
        floodfill(map,y+1,x);//往南
    }
}
int main(){
    while(scanf("%d%d",&N,&M)!=EOF){
        char **map=(char **)malloc(N*sizeof(char *));
        for(int y=0;y<N;y++){
            map[y]=(char *)malloc((M+1)*sizeof(char));
            scanf("%s",map[y]);
        }
        int puddles=0;
        for(int y=0;y<N;y++){
            for(int x=0;x<M;x++){
                area=0;
                if(map[y][x]=='W'){
                    floodfill(map,y,x);
                    if(area>big){
                        big=area;
                    }
                    if(area<small){
                        small=area;
                    }
                    puddles+=1;
                }
            }
        }
        if(puddles==0){
            printf("0 0 0\n");
        }
        else{
            printf("%d %d %d\n",big,small,puddles);
        }
        for(int y=0;y<N;y++){
            free(map[y]);
        }
        free(map);
        small=999;
        big=-1;
    }
    return 0;
}