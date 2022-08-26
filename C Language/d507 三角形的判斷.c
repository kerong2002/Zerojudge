#include<stdio.h>
#include<math.h>
int main(){
    int list[3];
    scanf("%d %d %d",&list[0],&list[1],&list[2]);
    float s1,s2,big,hold;
    for(int x=0;x<3;x++){
        for(int y=x+1;y<3;y++){
            if(list[x]>list[y]){
                hold=list[x];
                list[x]=list[y];
                list[y]=hold;
            }
        }
    }
    s1=list[0],s2=list[1],big=list[2];
    s1=pow(s1,2);
    s2=pow(s2,2);
    big=pow(big,2);
    if((s1+s2)<big){
        printf("obtuse triangle");
    }
    else if((s1+s2)==big){
        printf("right triangle");
    }
    else{
        printf("acute triangle");
    }
    return 0;
}
