#include<stdio.h>
int main(){
    int a,b,c,
        d,e,f;
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
    int delta,X_delta,Y_delta;
    delta=a*e-b*d;
    X_delta=c*e-b*f;
    Y_delta=a*f-d*c;
    double ans_X=X_delta/(double)delta;
    double ans_Y=Y_delta/(double)delta;
    if(delta==0 &&  (X_delta!=0 || Y_delta!=0)){
        printf("No answer");
    }
    else if(delta==0 && X_delta==0 && Y_delta==0){
        printf("Too many");
    }
    else{
        printf("x=%.2f\n",ans_X);
        printf("y=%.2f\n",ans_Y);
    }
    return 0;
}
