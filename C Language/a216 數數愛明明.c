#include<stdio.h>

int F_function(int n){
    if(n==1)
        return 1;
    else{
        return n+F_function(n-1);
    }
}

long long int G_function(int n){
    if(n==1)
        return 1;
    else{
        return F_function(n)+G_function(n-1);
    }
}

int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        printf("%d %lld\n",F_function(n),G_function(n));
    }


    return 0;
}
