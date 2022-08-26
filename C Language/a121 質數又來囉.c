#include<stdio.h>
#include<math.h>
int main(){
    int start = 0;
    int end = 0;
    while(scanf("%d %d",&start,&end)!=EOF){
        int count=0;
        for(int x=start;x<=end;x++){
            int run_cnt=0;
            for(int y=2;y<=sqrt(x);y++){
                if(x%y==0 && x!=y){
                    run_cnt+=1;
                    break;
                }
            }
            if(run_cnt==0)
                count+=1;
        }
        if(start==1)
            count-=1;
        printf("%d\n",count);
    }


    return 0;
}
