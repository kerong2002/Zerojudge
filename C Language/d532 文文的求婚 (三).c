#include<stdio.h>
int main(){
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF){
        int count=0;
        for(int y=a;y<=b;){
            if ((y%4==0 && y%100!= 0)||(y%400==0)){
                count+=1;
            }
            if(y%4==0){
                y+=4;
            }
            else{
                y++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}

