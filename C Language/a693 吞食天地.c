#include<stdio.h>
int main(){
    int n,m,i,r;
    while(scanf("%d %d",&n,&m)!=EOF){
        int list[n+1];
        for(int x=1;x<=n;x++){
            scanf("%d",&list[x]);
        }
        while(m--){
            int sum=0;
            scanf("%d %d",&i,&r);
            for(int y=i;y<=r;y++){
                sum+=list[y];
            }
            printf("%d\n",sum);
        }
    }
    return 0;
}
