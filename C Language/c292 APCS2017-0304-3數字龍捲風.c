#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
typedef struct node{
    int val;
    struct node *next;
}Node;
int main(){
//======================<環狀鏈結>=======================
    Node *first,*current,*previous;
    for(int x=0;x<4;x++){
        current=(Node *)malloc(sizeof(Node));//建立新節點
        current->val=x;
        if(x==0){
            first=current;          //第一個
        }
        else{
            previous->next=current;//把前一個next指向目前的節點
        }
        if(x==3){
            current->next=first;
        }
        else{
            current->next=NULL;
        }
        previous=current;
    }
    current=first;
//    for(int x=0;x<8;x++){
//        printf("%d",first->val);
//        first=first->next;
//    }
    int N;
    scanf("%d",&N);
    int **N_list=(int **)calloc(N,sizeof(int*));
    for(int y=0;y<N;y++){
        N_list[y]=(int *)calloc(N,sizeof(int));
    }
    int active;
    scanf("%d",&active);
    for(int x=0;x<4;x++){
        if(current->val==active){
            break;
        }
        if(current->val!=active){
            current=current->next;
        }
    }
    for(int y=0;y<N;y++){
        for(int x=0;x<N;x++){
            scanf("%d",&N_list[y][x]);
        }
    }
    int Now[2]={0};
    Now[0]=N/2;
    Now[1]=N/2;
    int run=0;
    int bonus=1;
    int save=0;
    printf("%d",N_list[Now[0]][Now[1]]);
//    printf("(%d,%d) run=%d bonus=%d\n",Now[1],Now[0],run,bonus);
    while(true){
        if(run==bonus){
            current=current->next;
            save+=1;
            run=0;
        }
        if(save==2){
            bonus+=1;
            save=0;
        }
        if(current->val==0){
            Now[0]-=1;
        }
        else if(current->val==1){
            Now[1]-=1;
        }
        else if(current->val==2){
            Now[0]+=1;
        }
        else if(current->val==3){
            Now[1]+=1;
        }
        run+=1;
//        printf("%d(%d,%d) run=%d bonus=%d\n",N_list[Now[1]][Now[0]],Now[1],Now[0],run,bonus);
        if(Now[0]<0 || Now[1]<0 || Now[0]>=N || Now[1]>=N){
            break;
        }
        printf("%d",N_list[Now[1]][Now[0]]);
    }
    for(int y=0;y<N;y++){
        free(N_list[y]);
    }
    free(N_list);
    return 0;
}
