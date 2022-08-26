#include<stdio.h>
#include<math.h>
int main(){
    int n,a,b;
    scanf("%d",&n);
    int cnt=1;
    for(int i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        int sum=0;
        for(int x=a;x<=b;x++){
            if(sqrt(x)==ceil(sqrt(x))){
                sum+=x;
            }
        }
        printf("Case %d: %d\n",cnt++,sum);
    }
    return 0;
}
