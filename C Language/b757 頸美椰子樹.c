#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    double r;
    scanf("%lf",&r);
    printf("%f\n", (r*9)/5 + 32);
    printf("%g\n", (r*9)/5 + 32);
    return 0;
}
