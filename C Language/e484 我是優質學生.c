#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool prime[10001];
void eratosthenes(){
    for(int i=0;i<10001;i++){
        prime[i]=true;
    }
    prime[0]=false;
    prime[1]=false;
    for(int i=2;i<10001;i++){
        if(prime[i])
        for(int j=i+i;j<10001;j+=i){
            prime[j]=false;
        }
    }
}
int main(){
    int n;
    eratosthenes();
    while(scanf("%d",&n)!=EOF){
        printf("%s",(prime[n]==true)?"yes\n":"no\n");
    }
    return 0;
}
