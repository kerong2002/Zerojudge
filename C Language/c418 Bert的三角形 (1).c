#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int h=0;h<n;h++){
        for(int r=0;r<n;r++){
            printf("%s",h>=r?"*":" ");
        }
        printf("\n");
    }
    return 0;
}
