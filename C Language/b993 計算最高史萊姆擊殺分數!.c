#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<limits.h>
int main(){
    int n,save;
    while(scanf("%d",&n)!=EOF){
        int min=INT_MIN;
        while(n--){
            scanf("%d",&save);
            min=save>min?save:min;
        }
        printf("%d\n",min);
    }

    return 0;
}
