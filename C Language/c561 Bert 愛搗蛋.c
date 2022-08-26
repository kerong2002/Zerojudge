#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define swap(a,b) {int t=a;a=b;b=t;}
int main(){
    int n;
    char rev[1000001]={'\0'};
    while(scanf("%d",&n)!=EOF){
        int max=-1;
        while(n--){
            scanf("%s",rev);
            for(int x=0;x<strlen(rev)/2;x++){
                swap(rev[x],rev[strlen(rev)-1-x]);
            }
            if(max<atoi(rev)){
                max=atoi(rev);
            }
        }
        printf("%d\n",max);
    }
    return 0;
}
