#include<stdio.h>
int binary_switch(int n){
    if(n>1){
        binary_switch(n/2);
    }
    printf("%d",n%2);

}
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        binary_switch(n);
        printf("\n");
    }
    return 0;
}
