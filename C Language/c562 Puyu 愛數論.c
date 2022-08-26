#include<stdio.h>
int main(){
    long int n;
    while(scanf("%ld",&n)!=EOF){
        int take;
        int sum=0;
        if(n==0)sum+=1;
        while(n>0){
            take=n%10;
            n=n/10;
            switch(take){
            case 0:
                sum+=1;
                break;
            case 6:
                sum+=1;
                break;
            case 8:
                sum+=2;
                break;
            case 9:
                sum+=1;
                break;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
