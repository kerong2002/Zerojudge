#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int m,n,area=0;
void floodfill(char **map,int y,int x){
    map[y][x]='X';
    area+=1;
    if(x>0 && map[y][x-1]=='J'){
        floodfill(map,y,x-1);//往西
    }
    if(y>0 && map[y-1][x]=='J'){
        floodfill(map,y-1,x);//往北
    }
    if(x<n-1 && map[y][x+1]=='J'){
        floodfill(map,y,x+1);//往東
    }
    if(y<m-1 && map[y+1][x]=='J'){
        floodfill(map,y+1,x);//往南
    }
}
int main(){
    while(scanf("%d%d",&m,&n)!=EOF){
        char **map=(char **)malloc(m*sizeof(char *));
        for(int y=0;y<m;y++){
            map[y]=(char *)malloc((n+1)*sizeof(char));
            scanf("%s",map[y]);
        }
        int JIZZ=0;
        int max=0;
        for(int y=0;y<m;y++){
            for(int x=0;x<n;x++){
                area=0;
                if(map[y][x]=='J'){
                    JIZZ+=1;
                    floodfill(map,y,x);
                    if(area>max){
                        max=area;
                    }
                }
            }
        }
        printf("%d %d\n",JIZZ,max);
        for(int y=0;y<m;y++){
            free(map[y]);
        }
        free(map);
    }

    return 0;
}
