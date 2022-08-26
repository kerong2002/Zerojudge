#include<stdio.h>
int main(){
    char n[1000]={'\0'};
    char *set;
    int b1,b2;
    while(scanf("%s %d %d",&n,&b1,&b2)!=EOF){
        int sum=0,count;
        set=n+999;
        for(int x=0;n[x];x++){
            if(n[x]<='9'){
                sum=sum*b1+(n[x]-'0');
            }
            else{
                sum=sum*b1+(n[x]-'A'+10);
            }
        }
        while(sum){
            count=sum%b2;
            *--set=count<=9?count+'0':count+'A'-10;
            sum/=b2;
        }
        puts(set);
    }
    return 0;
}
