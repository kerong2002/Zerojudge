#include<stdio.h>

int main(){
    long int n ,sum ;
    while(scanf("%ld",&n) != EOF){
        sum = 0 ;
        do {
            n /= 5 ;
            sum += n ;
        } while (n != 0);
        printf("%ld\n",sum);
    }
    return 0;

}
