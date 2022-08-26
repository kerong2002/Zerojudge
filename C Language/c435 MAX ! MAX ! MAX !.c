#include <stdio.h>
int main(){
    int n, max, min, KR, best;
    while (scanf("%d",&n)!=EOF){
        scanf("%d",&min);
        best = 0, max = min;
        while (n--){
            scanf("%d",&KR);
            if ( KR< min)
                min = KR;
            else if (KR> max){
                if (max - min > best){
                    best = max - min;
                }
                max=min=KR;
            }
        }
        printf("%d\n",best<max-min?max-min:best);
    }
    return 0;
}
