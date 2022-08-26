#include<stdio.h>
#include<stdlib.h>
int main(){
    int T;
    while(scanf("%d",&T)!=EOF){
        for(int time=0;time<T;time++){
            int n,m;
            int count=1;
            scanf("%d %d",&n,&m);
            int **high=(int**)calloc(n,sizeof(int*));
            for(int i=0;i<n;i++){
                high[i]=(int*)calloc(n,sizeof(int));
            }
            int row=0;
            int length=n-1;
            for(int y=0;y<n;y++){
                for(int x=row;x<=length;x++){
                    high[y][x]=count++;
                }
                for(int x=row+1;x<=length;x++){
                    high[x][length]=count++;
                }
                for(int x=length-1;x>=row;x--){
                    high[length][x]=count++;
                }
                for(int x=length-1;x>row;x--){
                    high[x][row]=count++;
                }
                row+=1;
                length-=1;
            }
            if(m==1){
                for(int x=0;x<n;x++){
                    for(int y=0;y<n;y++){
                        printf("%5d",high[x][y]);
                    }
                    printf("\n");
                }
            }
            if(m==2){
                for(int x=0;x<n;x++){
                    for(int y=0;y<n;y++){
                        printf("%5d",high[y][x]);
                    }
                    printf("\n");
                }
            }
            for(int i=0;i<n;i++){
                free(high[i]);
            }
            free(high);
        }

    }
    return 0;
}
