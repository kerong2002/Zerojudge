#include<stdio.h>
#include<stdlib.h>
int binary_search(int list[],int low,int high,int target){
    while(low<=high){
        int mid=(low+high)/2;
        if(list[mid]==target){
            return mid+1;
        }
        if(list[mid]>target){
            high=mid-1;
        }
        else if(list[mid]<target){
            low=mid+1;
        }
    }
    return 0;
}
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int *n_list=(int *)calloc(n,sizeof(int));
    for(int x=0;x<n;x++){
        scanf("%d",&n_list[x]);
    }
    for(int x=0;x<k;x++){
        int find;
        scanf("%d",&find);
        printf("%d\n",binary_search(n_list,0,n-1,find));
    }
    return 0;
}
