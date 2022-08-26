#include<stdio.h>

//int move = 0;

int Hanoi(int N,char A,char B,char C) {//A from,B buffer,C to
    if(N==1){
        printf("Move ring %d from %C to %C\n",N,A,C);//A to C
        //move++;
    }
    else{
        Hanoi(N-1,A,C,B);//A to B
        printf("Move ring %d from %C to %C\n",N,A,C);
        //move++;
        Hanoi(N-1,B,A,C);//B to C
    }
    return 0;
}

int main() {
    int N = 0;
    while(scanf("%d", &N)!=EOF){
        Hanoi(N,'A','B','C');
    }
	//printf("%d",move);
    return 0;
}

