#include<stdio.h>
int N;
void pizza(int N,char A,char B,char C) {
    if(N==1){
        printf("from %C to %C\n",A,C);
    }
    else{
        pizza(N-1,A,C,B);
        printf("from %C to %C\n",A,C);
        pizza(N-1,B,A,C);
    }
}

int main() {
    while(scanf("%d", &N)!=EOF){
        pizza(N,'A','B','C');
    }
    return 0;
}
