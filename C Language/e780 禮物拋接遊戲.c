#include<stdio.h>
#include<string.h>
int main(){
    int N;
    scanf("%d",&N);
    int x=0,put,gift=0;
    while(N--){
        char active[10]={'\0'};
        scanf("%s",active);
        if(strcmp(active,"L")==0){
            x-=1;
        }
        else if(strcmp(active,"R")==0){
            x+=1;
        }
        else if(strcmp(active,"Gift")==0){
            scanf("%d",&put);
            if(put==x){
                gift+=1;
            }

        }
    }
    printf("%d\n",gift);
    return 0;
}
