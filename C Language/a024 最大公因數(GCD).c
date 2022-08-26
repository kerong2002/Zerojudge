#include<stdio.h>
void gcd(int a,int b){
	if(!b){
		printf("%d",a);
	}
	else{
        gcd(b,a%b);
	}
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    gcd(a,b);
    return 0;
}
