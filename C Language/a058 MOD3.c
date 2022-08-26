#include<stdio.h>
int main(){
    int k0=0,k1=0,k2=0,n,number;
    scanf("%d",&n);
    for(int x=0;x<n;x++){
        scanf("%d",&number);
        switch(number%3){
            case 0:
                k0++;
                break;
            case 1:
                k1++;
                break;
            case 2:
                k2++;
                break;
            default:
                break;
        }
    }
    printf("%d %d %d",k0,k1,k2);
    return 0;
}
