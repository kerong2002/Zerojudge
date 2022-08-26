#include<stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    int child =(year>=6 && year<=11)?590:0;
    int teenager=(year>=12 && year<=17)?790:0;
    int adults=(year>=18 && year<=59)?890:0;
    int old=(year>=60)?399:0;
    printf("%d",child+teenager+adults+old);
    return 0;
}
