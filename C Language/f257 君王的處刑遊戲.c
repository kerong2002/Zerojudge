#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,k;
    while(scanf("%d",&n)!=EOF){
        scanf("%d",&k);
        int **list=(int **)calloc(n,sizeof(int*));
        for(int x=0;x<n;x++){
            list[x]=(int *)calloc(n,sizeof(int *));
        }
        for(int x=0;x<k;x++){
            int x_site,y_site;
            scanf("%d%d",&x_site,&y_site);
            if(list[y_site][x_site]!=-1){
                list[y_site][x_site]=-1;
                for(int row=y_site-1;row<=y_site+1;row++){
                    if(row<0 ||row>=n){
                        continue;
                    }
                    for(int column=x_site-1;column<=x_site+1;column++){
                        if(column<0 || column>=n){
                            continue;
                        }
                        if(list[row][column]!=-1){
                            list[row][column]+=1;
                        }
                    }


                }
            }
        }
        for(int y=0;y<n;y++){
            for(int x=0;x<n;x++){
                if(list[y][x]==-1){
                    printf("x");
                }
                else{
                    printf("%d",list[y][x]);
                }
            }
            printf("\n");
        }
        for(int x=0;x<n;x++){
            free(list[x]);
        }
        free(list);
    }

    return 0;
}
