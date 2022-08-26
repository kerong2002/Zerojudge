#include<stdio.h>
int main(){
    int subjectN=0;
    while(scanf("%d",&subjectN)!=EOF){
        int score=0;
        float sum=0;
        for(int x=0;x<subjectN;x++){
            scanf("%d",&score);
            sum+=score;
        }
        printf("%s\n",(int)(sum/subjectN+0.5)>=60?"no":"yes");

    }


    return 0;
}
