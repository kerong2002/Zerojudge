#include<stdio.h>
int main(){
    int h,m;
    while(scanf("%d %d",&h,&m)!=EOF){
        if(h<=7 && m<30){
            printf("Off School\n");
        }
        else if(h<7){
            printf("Off School\n");
        }
        else if(h>=17 && m>=00){
            printf("Off School\n");
        }
        else{
            printf("At School\n");
        }


    }

    return 0;
}
