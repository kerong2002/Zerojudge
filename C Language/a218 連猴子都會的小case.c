#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,save;
    while(scanf("%d",&n)!=EOF){
        int max=0;
        int *list=(int *)calloc(10,sizeof(int));
        while(n--){
            scanf("%d",&save);
            list[save]+=1;
            if(list[save]>max){
                max=list[save];
            }
        }
        while(max){
            for(int x=0;x<=9;x++){
                if(list[x]==max){
                    printf("%d ",x);
                }
            }
            max--;
        }
        puts("");
        free(list);
    }
    return 0;
}
