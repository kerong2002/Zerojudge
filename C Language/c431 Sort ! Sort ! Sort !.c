#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    int inputN;
    scanf("%d",&n);
    int *appear=(int *)calloc(101,sizeof(int));
    while(n--){
       scanf("%d",&inputN);
       appear[inputN]++;
    }
    for(int i=1;i<=100;i++){
        while(appear[i]--)
            printf("%d ",i);
    }
    free(appear);
    return 0;
}
