#include<stdio.h>
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        if(n<=0)
            break;
    	for(int x=1;x<n;x++){
    		if(x%7==0){
    			continue;
			}
			else{
				printf("%d ",x);
			}
		}
		printf("\n");

    }
    return 0;
}
