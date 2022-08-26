#include<stdio.h>
int main(){
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF){
        int ans=(b+100-a)%100;
        printf("%d\n",ans);
    }
    return 0;
}
