#include<stdio.h>
int main(){
    int n;
    int classmate;
    while(scanf("%d",&n)!=EOF){
        int max=-1;
        for(int x=0;x<n;x++){
            scanf("%d",&classmate);
            if(classmate>max){
                max=classmate;
            }
        }
        printf("%d\n",max);
    }
    return 0;
}
