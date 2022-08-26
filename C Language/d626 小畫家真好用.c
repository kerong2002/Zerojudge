#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int n;
void floodfill(char **paint,int x,int y){
    paint[y][x]='+';
    if(x>0 && paint[y][x-1]=='-'){
        floodfill(paint,x-1,y);
    }
    if(y>0 && paint[y-1][x]=='-'){
        floodfill(paint,x,y-1);
    }
    if(x<n-1 && paint[y][x+1]=='-'){
        floodfill(paint,x+1,y);
    }
    if(y<n-1 && paint[y+1][x]=='-'){
        floodfill(paint,x,y+1);
    }
}
int main(){
    scanf("%d",&n);
    char **paint=(char **)malloc(n*sizeof(char*));
    for(int y=0;y<n;y++){
        paint[y]=(char *)malloc((n+1)*sizeof(char));
        scanf("%s",paint[y]);
    }

    int x,y;
    scanf("%d %d",&y,&x);
    floodfill(paint,x,y);
    for(int y=0;y<n;y++){
        puts(paint[y]);
    }
    for(int y=0;y<n;y++){
        free(paint[y]);
    }
    free(paint);
    return 0;
}
