#include<stdio.h>
#include<stdlib.h>
int main(){
    int N;
    while(scanf("%d",&N)!=EOF){
        int start=-1,end=-1;
        int queue[100001]={0};
        while(N--){
            int k;
            scanf("%d",&k);
            switch(k){
                case 1:
                    end+=1;
                    scanf("%d",&queue[end]);
                    break;
                case 2:
                    if(start==end){
                        printf("-1\n");
                    }
                    else{
                        printf("%d\n",queue[start+1]);
                    }
                    break;
                case 3:
                    if(start<end){
                        start+=1;
                    }
                    break;
                default:
                    printf("error\n");
                    break;

            }
        }
    }
    return 0;
}
