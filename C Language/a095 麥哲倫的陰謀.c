#include<stdio.h>
int main(){
    int total=0,red=0;
    int day=0;
    while(scanf("%d %d",&total,&red)!=EOF){
        if(total==red){
            day=red;
            printf("%d\n",day);
        }
        else{
            day=red+1;
            printf("%d\n",day);
        }

    }

    return 0;
}
