#include<stdio.h>
#include<stdlib.h>
int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    int list[2001]={0};
    for(int x=0;x<m;x++){
        scanf("%d",&list[x]);
    }
    int done=0;
    int not=0;
    int people;
    for(int x=0;x<n;x++){
        scanf("%d",&people);
        int find=0;
        for(int x=0;x<m;x++){
            if(people==list[x]){
                find=1;
                break;
            }
        }
        if(find==1){
            done+=1;
        }
        else{
            not+=1;
        }
    }
    printf("%d",m-done-not);
    return 0;
}
