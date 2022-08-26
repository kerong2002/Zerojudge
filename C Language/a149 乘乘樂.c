#include<stdio.h>
#include<string.h>
int main(){
    int N;
    int number;
    while(scanf("%d",&N)!=EOF){
        for(int x=0;x<N;x++){
            int multiply = 1;
            scanf("%d",&number);
            if(number==0)printf("0\n");
            else{
                while(number){
                multiply*=number%10;
                number/=10;
                }
                printf("%d\n",multiply);
            }

        }
    }
    return 0;
}
