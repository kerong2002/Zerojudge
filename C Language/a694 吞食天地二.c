#include<stdio.h>
int main(){
    int n,m,x1,y1,x2,y2;
    while(scanf("%d %d",&n,&m)!=EOF){
        int list[500][500];
        for(int x=1;x<=n;x++){
            int count=1;
            while(scanf("%d",&list[x][count])){
                if(getchar()=='\n') break;
                count++;
            }
        }
        while(m--){
            scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
            int sum=0;
            for(int x=y1;x<=y2;x++){
                for(int y=x1;y<=x2;y++){
                    sum+=list[y][x];
                }
            }
            printf("%d\n",sum);
        }
    }
    return 0;
}
