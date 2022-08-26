#include<stdio.h>
#include<stdlib.h>
int island_X,island_Y;
int area=0;
void floodfill(int **territory,int y,int x,int pick){
    territory[y][x]=0;
    area+=1;
    if(x>0 && territory[y][x-1]==pick){
        floodfill(territory,y,x-1,pick);//往西
    }
    if(y>0 && territory[y-1][x]==pick){
        floodfill(territory,y-1,x,pick);//往北
    }
    if(x<island_X-1 && territory[y][x+1]==pick){
        floodfill(territory,y,x+1,pick);//往東
    }
    if(y<island_Y-1 && territory[y+1][x]==pick){
        floodfill(territory,y+1,x,pick);//往南
    }
}
int main(){
    while(scanf("%d %d",&island_Y,&island_X)!=EOF){
        int **territory=(int **)calloc(island_Y,sizeof(int*));//領土
        for(int y=0;y<island_Y;y++){
            territory[y]=(int *)calloc(island_X,sizeof(int));
            for(int x=0;x<island_X;x++){
                scanf("%d",&territory[y][x]);
            }
        }
        int *size=(int *)calloc(10,sizeof(int));
        for(int y=0;y<island_Y;y++){
            for(int x=0;x<island_X;x++){
                if(territory[y][x]>0){
                    area=0;
                    int save=territory[y][x];
                    floodfill(territory,y,x,save);
                    if(area>size[save]){
                        size[save]=area;
                    }

                }
            }
        }
        int m,ask;
        scanf("%d",&m);
        while(m--){
            scanf("%d",&ask);
            printf("%d\n",size[ask]<2?0:size[ask]);
        }
        for(int y=0;y<island_Y;y++){
            free(territory[y]);
        }
        free(territory);
        free(size);
    }
    return 0;
}
