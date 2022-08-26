#include<stdio.h>
int main(){
    int n=0;
    while(scanf("%d",&n)!=EOF){
        int active=0;
        long int a=0,b=0;
        for(int x=0;x<n;x++){
            scanf("%d %d %d",&active,&a,&b);
            switch(active){
            case 1:
                printf("%ld\n",a+b);
                break;
            case 2:
                printf("%ld\n",a-b);
                break;
            case 3:
                printf("%ld\n",a*b);
                break;
            case 4:
                printf("%ld\n",a/b);
                break;


            }
        }
    }

    return 0;
}
