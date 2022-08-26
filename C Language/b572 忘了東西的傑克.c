#include<stdio.h>
int main(){
    int all_time,n;
    int now_h,now_m;
    int back_h,back_m;
    int go_time;
    int now_time;
    int back_time;
    scanf("%d",&n);
    for(int x=0;x<n;x++){
        scanf("%d %d %d %d %d",&now_h,&now_m,&back_h,&back_m,&go_time);
        now_time=now_h*60+now_m;
        back_time=back_h*60+back_m;
        all_time=back_time-now_time;
        printf("%s\n",go_time>all_time?"No":"Yes");
    }
    return 0;
}
