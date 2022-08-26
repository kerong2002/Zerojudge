#include<stdio.h>
#include<stdlib.h>
int main(){
    int N,a,b;
    while(scanf("%d",&N)!=EOF){
        int robot_x=0,robot_y=0;
        while(N--){
            scanf("%d %d",&a,&b);
            switch(a){
                case 0:
                    robot_y+=b;
                    break;
                case 1:
                    robot_x+=b;
                    break;
                case 2:
                    robot_y-=b;
                    break;
                case 3:
                    robot_x-=b;
                    break;
                default:
                    break;
            }
        }
        printf("%d %d\n",robot_x,robot_y);
    }
    return 0;
}
