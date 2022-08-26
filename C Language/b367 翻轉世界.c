#include<stdio.h>
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int high,width;
        scanf("%d %d",&high,&width);
        int map[high][width];
        for(int y=0;y<high;y++){
            for(int x=0;x<width;x++){
                scanf("%d",&map[y][x]);
            }
        }
        int reverse[high][width];
        for(int y=0;y<high;y++){
            for(int x=0;x<width;x++){
                reverse[y][x]=map[high-1-y][width-1-x];
            }
        }
        int really=0;
        for(int y=0;y<high;y++){
            for(int x=0;x<width;x++){
                if(reverse[y][x]!=map[y][x]){
                    really+=1;
                    break;
                }
            }
        }
        printf("%s",really==0?"go forward\n":"keep defending\n");
    }
    return 0;
}
