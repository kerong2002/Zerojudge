#include<stdio.h>
int main(){
    int size=0;
    while(scanf("%d",&size)!=EOF){
        int array[size];
        for(int x=0;x<size;x++){
            scanf("%d",&array[x]);
        }
        for(int i=0;i<size;i++){
            int hold=0;
            for(int j=i+1;j<size;j++){
                if(array[j]<array[i]){
                    hold=array[i];
                    array[i]=array[j];
                    array[j]=hold;
                }
            }
        }
        for(int x=0;x<size;x++){
            printf("%d ",array[x]);
        }
        printf("\n");
    }

    return 0;
}
