#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int h=0;h<n;h++){
        for(int r=0;r<2*n-1;r++){
            if(h+r<n-1){
                printf("_");
            }
            else if(r-h>=n){
                printf("_");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}

