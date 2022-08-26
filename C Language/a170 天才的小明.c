#include<stdio.h>
#include<string.h>
int main(){
    char a[999]={'\0'};
    char b[999]={'\0'};
    int n;
    scanf("%d",&n);
    while(n--){
        long long int sum=0;
        scanf("%s %s",a,b);
        long long int bonus=1;
        for(int x=strlen(a)-1;x>=0;x--){
            sum+=(a[x]-'0')*bonus;
            bonus*=8;
        }
        bonus=1;
        for(int x=strlen(b)-1;x>=0;x--){
            sum+=(b[x]-'0')*bonus;
            bonus*=8;
        }
        int answer[999]={0};
        int cnt=0;
//        printf("@%lld@",sum);
        while(sum>0){
            answer[cnt++]=sum%16;
            sum/=16;
        }
        char englist[50]={"0123456789ABCDEF"};
        for(int x=cnt-1;x>=0;x--){
            printf("%c",englist[answer[x]]);
        }
        puts("");
    }
    return 0;
}
