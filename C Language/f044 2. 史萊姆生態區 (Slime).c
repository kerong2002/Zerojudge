#include<stdio.h>
int main(){
    int king,slime;
    while(scanf("%d %d",&king,&slime)!=EOF){
        int count=0,day=0;
        while(count<slime){
            count+=count;
            count+=king;
            day+=1;
        }
        printf("%d\n",day);
    }
    return 0;
}
