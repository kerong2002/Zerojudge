#include<stdio.h>
int main(){
    char sky[10][10]={"庚","辛","壬","癸","甲","乙","丙","丁","戊","己"};
    char ground[12][10]={"申","酉","戌","亥","子","丑","寅","卯","辰","巳","午","未"};
    int n;
    while(scanf("%d",&n)!=EOF){
        n-=1800;
        printf("%s%s\n",sky[n%10],ground[n%12]);
    }
}
