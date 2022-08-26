#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int list[n][2];
    for(int x=0;x<n;x++){
        scanf("%d %d",&list[x][0],&list[x][1]);
    }
          /*priority sort x */
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(list[i][0]>list[j][0]){
                int hold_x=list[i][0];
                int hold_y=list[i][1];
                list[i][0]=list[j][0];
                list[i][1]=list[j][1];
                list[j][0]=hold_x;
                list[j][1]=hold_y;
            }
        }
    }
          /*second sort y */
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(list[i][1]>list[j][1] && list[i][0]==list[j][0]){
                int hold_x=list[i][0];
                int hold_y=list[i][1];
                list[i][0]=list[j][0];
                list[i][1]=list[j][1];
                list[j][0]=hold_x;
                list[j][1]=hold_y;
            }
        }
    }
    for(int x=0;x<n;x++){
        printf("%d %d\n",list[x][0],list[x][1]);
    }
    return 0;
}
