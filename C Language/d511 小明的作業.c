#include<stdio.h>
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define BIG(x,y,z) ((max(x,y))>(max(y,z))?(max(x,y)):(max(y,z)))
int main(){
    int list[5][3]={0};
    for(int y=0;y<5;y++){
        scanf("%d %d %d",&list[y][0],&list[y][1],&list[y][2]);
    }
    int total=0;
    for(int y=0;y<5;y++){
        int C=BIG(list[y][0],list[y][1],list[y][2]);
        int A=min(list[y][0],list[y][1]);
        int B=min(list[y][1],list[y][2]);
        if(((A+B)>C) && ((A-B)<C)){
            total+=1;
        }
    }
    printf("%d",total);
    return 0;
}
