#include<stdio.h>
int main(){
    int N;
    while(scanf("%d",&N) && N){
        int count=0;
        while(N%2){
            count++;
            N/=2;
        }
        printf("%d\n",count);
    }

    return 0;
}
