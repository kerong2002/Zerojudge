#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define min(a,b) ((a>=b)?b:a)
#define max(a,b) ((a>=b)?a:b)
int main(){
    int n,m;
    while(scanf("%d %d",&n,&m)!=EOF){
        char **fence=(char **)malloc((n+3)*sizeof(char *));
        for(int y=0;y<(n+2);y++){
            fence[y]=(char *)malloc((n+3)*sizeof(char));
        }
        for(int y=0;y<(n+2);y++){
            for(int x=0;x<(n+2);x++){
                if(x==0||x==n+1){
                    fence[y][x]='-';
                }
                else if(y==0||y==n+1){
                    fence[y][x]='|';
                }
                else{
                    fence[y][x]=' ';
                }
            }
        }
        m-=1;
        int old_x,old_y,new_x,new_y;
        scanf("%d%d",&old_x,&old_y);
        while(m--){
            scanf("%d%d",&new_x,&new_y);
            int small_y=min(new_y,old_y);
            int big_y=max(new_y,old_y);
            int small_x=min(new_x,old_x);
            int big_x=max(new_x,old_x);
            for(int y=small_y;y<=big_y;y++){
                for(int x=small_x;x<=big_x;x++){
                    fence[y][x]='*';
                }
            }
            old_x=new_x;
            old_y=new_y;
        }
        for(int y=0;y<(n+2);y++){
            for(int x=0;x<(n+2);x++){
                printf("%c",fence[x][y]);
            }
            printf("\n");
        }
        for(int y=0;y<(n+2);y++){
            free(fence[y]);
        }
        free(fence);
    }
    return 0;
}
