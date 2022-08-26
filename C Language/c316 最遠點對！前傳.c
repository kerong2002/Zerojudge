#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int N;
    while(scanf("%d",&N)!=EOF){
        int *position_x=(int *)calloc(N,sizeof(int));
        int *position_y=(int *)calloc(N,sizeof(int));
        for(int x=0;x<N;x++){
            scanf("%d %d",&position_x[x],&position_y[x]);
        }
        double distant=0.0;
        int a,b;
        for(int y=0;y<N;y++){
            for(int x=y+1;x<N;x++){
                double length=sqrt(pow((position_x[y]-position_x[x]),2)+pow((position_y[y]-position_y[x]),2));
                if(length>distant){
                    a=y;
                    b=x;
                    distant=length;
                }
            }
        }
        printf("%d %d\n",a,b);
        free(position_x);
        free(position_y);
    }
    return 0;
}
