#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char combo[5][30]={"Medium Wac 4",
                       "WChicken Nugget 8",
                       "Geez Burger 7",
                       "ButtMilk Crispy Chicken 6",
                       "Plastic Toy 3"};
    char one[4][20]={"German Fries 2",
                     "Durian Slices 3",
                     "WcFurry 5",
                     "Chocolate Sunday 7"};
    int combo_money[5]={4,8,7,6,3};
    int one_money[4]={2,3,5,7};
    int n,pick;
    int total=0;
    while(scanf("%d",&n)&&n){
        if(n==1){
            scanf("%d",&pick);
            printf("%s\n",combo[pick-1]);
            total+=combo_money[pick-1];
        }
        if(n==2){
            scanf("%d",&pick);
            printf("%s\n",one[pick-1]);
            total+=one_money[pick-1];
        }
    }
    printf("Total: %d\n",total);
    return 0;
}
