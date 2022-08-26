#include<stdio.h>
#include<string.h>
#include<math.h>
//39321最大9999轉成16進制的數字
int binary[999];
void double_B(){
    for(int x=0;x<16;x++){
        binary[x]=(int)pow(2,x);//建置所有39321以內的2的倍數
    }
}
int main(){
    double_B();//建表
    int N;
    scanf("%d",&N);
    while(N--){
        int M;
        scanf("%d",&M);
        int first_M=M;      //2進制動作
        int second_M=M;     //16進制動作
        int cnt_2=0;
        for(int x=15;x>=0;x--){
            if(first_M>=binary[x]){
                first_M-=binary[x];
                cnt_2+=1;           //2進制有幾個1
            }
        }
        //=================================
        int cnt_16=0;
        while(second_M>0){
            int pick=second_M%10;
            second_M/=10;
            if(pick>0){
                for(int x=4;x>=0;x--){
                    if(pick>=binary[x]){
                        pick-=binary[x];
                        cnt_16+=1;           //2進制有幾個1
                    }
                }
            }
        }
        //==============================
        printf("%d %d\n",cnt_2,cnt_16);
    }
    return 0;
}
