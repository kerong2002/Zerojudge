#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int W,H;
    scanf("%d %d",&W,&H);
    char **map=(char **)malloc(H*sizeof(char*));
    for(int y=0;y<H;y++){
        map[y]=(char *)malloc((2*W)*sizeof(char));
        scanf("%s",map[y]);
    }
    for(int t=0;t<2*W-1;t+=2){
        int x=t,y=0;
        while(y<=H){
            if(y==H){
                printf("%d ",x?x/2+1:x+1);
                break;
            }
            if(x>0 && map[y][x-1]=='-'){
                x-=2;
                y+=1;
            }
            else if(x<2*W-2 && map[y][x+1]=='-'){
                x+=2;
                y+=1;
            }
            else{
                y+=1;
            }
        }
    }
    for(int y=0;y<H;y++){
        free(map[y]);
    }
    free(map);
    return 0;
}
