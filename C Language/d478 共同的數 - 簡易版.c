#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int total;
void search(const int *list,int key,int low,int high){
    int middle;
    while(low<=high){
        middle=(low+high)/2;
        if(key==list[middle]){
            total+=1;
            break;
        }
        else if(list[middle]>key){
            high=middle-1;
        }
        else{
            low=middle+1;
        }
    }
}
int main(){
    int n,m;
    while(scanf("%d %d",&n,&m)!=EOF){
        while(n--){
            int *first=(int *)calloc(m,sizeof(int));
            int *second=(int *)calloc(m,sizeof(int));
            for(int x=0;x<m;x++){
                scanf("%d",&first[x]);
            }
            for(int y=0;y<m;y++){
                scanf("%d",&second[y]);
            }
            total=0;
            for(int y=0;y<m;y++){
                search(second,first[y],0,m);
            }
            printf("%d\n",total);
            free(first);
            free(second);
        }
    }
    return 0;
}
