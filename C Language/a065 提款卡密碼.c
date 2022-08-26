#include<stdio.h>
#include<math.h>
int main(){
    char list[7];
    scanf("%s",list);
    for(int x=1;x<7;x++){
        printf("%d",abs(list[x]-list[x-1]));
    }
    return 0;
}
