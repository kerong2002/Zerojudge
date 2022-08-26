#include<stdio.h>
int main(){
    int n,k,chain,allmin_B=-1;
    scanf("%d",&n);
    for(int x=0;x<n;x++){
        scanf("%d",&k);
        int min=999999;
        for(int y=0;y<k;y++){
            scanf("%d",&chain);
            if(chain<min) min=chain;
        }
        if(min>allmin_B) allmin_B=min;
    }
    printf("%d",allmin_B);
    return 0;
}
