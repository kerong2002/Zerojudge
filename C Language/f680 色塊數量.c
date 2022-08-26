#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int N;
void floodfill(int **map,int y,int x,int pick){
    map[y][x]=0;
    if(x>0 && map[y][x-1]==pick){
        floodfill(map,y,x-1,pick);//往西
    }
    if(y>0 && map[y-1][x]==pick){
        floodfill(map,y-1,x,pick);//往北
    }
    if(x<N-1 && map[y][x+1]==pick){
        floodfill(map,y,x+1,pick);//往東
    }
    if(y<N-1 && map[y+1][x]==pick){
        floodfill(map,y+1,x,pick);//往南
    }
}
int main(){
    while(scanf("%d",&N)!=EOF){
        int  **map=(int **)calloc(N,sizeof(int *));
        for(int y=0;y<N;y++){
            map[y]=(int *)calloc(N,sizeof(int));
            for(int x=0;x<N;x++){
                scanf("%d",&map[y][x]);
            }
        }
        int color=0;
        for(int y=0;y<N;y++){
            for(int x=0;x<N;x++){
                if(map[y][x]!=0){
                    floodfill(map,y,x,map[y][x]);
                    color+=1;
                }
            }
        }
        printf("%d\n",color);
        for(int y=0;y<N;y++){
            free(map[y]);
        }
        free(map);
    }
    return 0;
}
