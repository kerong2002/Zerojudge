#include<stdio.h>
#include<math.h>
int main(){
    int w,h;
    while(scanf("%d %d",&w,&h)!=EOF){
        double BMI=w/pow(h,2);
        printf("%.1f\n",BMI*10000);
    }
    return 0;
}
