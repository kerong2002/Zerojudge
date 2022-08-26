#include<stdio.h>
#include<string.h>
int main(){
    int division=10;//被除數
    int divisor=17; //除數
    int cnt=0;
    int list[16]={0};//16循環
    while(cnt<16){
        list[cnt++]=division/divisor;
        division=division%divisor;
        division*=10;
    }
//    for(int x=0;x<16;x++){
//        printf("%d ",list[x]);
//    }
//    puts("");
    int n,m;
    scanf("%d",&n);
    while(n--){
        int sum16=0;
        for(int x=0;x<16;x++){
            sum16+=list[x];
        }
        scanf("%d",&m);
        int sum=(m/16)*sum16;
        for(int x=0;x<m%16;x++){
            sum+=list[x];
        }
        printf("%d %d\n",list[(m-1)%16],sum);
    }


//    for(int x=0;x<16;x++){
//        printf("%d ",list[x]);
//    }

    return 0;
}
