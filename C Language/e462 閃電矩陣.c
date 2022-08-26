#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        int **list=(int **)calloc(n,sizeof(int *));
        for(int y=0;y<n;y++){
            list[y]=(int *)calloc(n,sizeof(int));
        }
        int cnt=1;
        int run=0;
        for(int t=0;t<2*n;t++){
            for(int y=0;y<n;y++){
                for(int x=0;x<n;x++){
                    if(run==x+y){
                        if(run%2==0){
                            list[x][y]=cnt++;
                        }
                        else{
                            list[y][x]=cnt++;
                        }
                    }
                }
            }
            run+=1;
        }
        for(int y=0;y<n;y++){
            for(int x=0;x<n;x++){
                printf("%d ",list[y][x]);
            }
            printf("\n");
        }
        for(int y=0;y<n;y++){
            free(list[y]);
        }
        free(list);
    }
    return 0;
}
