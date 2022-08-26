#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int student;
    int min=9999999;
    int max=-1;
    for(int x=0;x<n;x++){
        scanf("%d",&student);
        if(student>max) max=student;
        if(student<min) min=student;
    }
    printf("%d %d",max,min);
    return 0;
}
