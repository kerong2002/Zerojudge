#include<stdio.h>
#include<stdlib.h>
int main(){
    int m,p1,p2,n;
    while(scanf("%d %d %d %d",&m,&p1,&p2,&n)!=EOF){
        if(p1!=p2){
            printf("Error\n");
            continue;//非法矩陣相乘
        }
        long long int **A=(long long int **)calloc(m,sizeof(long long int*));
        for(int y=0;y<m;y++){
            A[y]=(long long int *)calloc(p1,sizeof(long long int));
            for(int x=0;x<p1;x++){
                scanf("%lld",&A[y][x]);
            }
        }
        long long int **B=(long long int **)calloc(p2,sizeof(long long int*));
        for(int y=0;y<p2;y++){
            B[y]=(long long int *)calloc(n,sizeof(long long int));
            for(int x=0;x<n;x++){
                scanf("%lld",&B[y][x]);
            }
        }
        long long int **matrix=(long long int **)calloc(m,sizeof(long long int *));
        for(int y=0;y<m;y++){
            matrix[y]=(long long int *)calloc(n,sizeof(long long int));
        }
        for(int y=0;y<m;y++){
            for(int x=0;x<n;x++){
                long long int count=0;
                for(int pos=0;pos<p1;pos++){
                    count+=A[y][pos]*B[pos][x];
                }
                matrix[y][x]=count;
            }
        }
        for(int y=0;y<m;y++){
            for(int x=0;x<n;x++){
                printf("%lld ",matrix[y][x]);
            }
            printf("\n");
        }
        for(int y=0;y<m;y++){
            free(A[y]);
        }
        for(int y=0;y<p2;y++){
            free(B[y]);
        }
        for(int y=0;y<m;y++){
            free(matrix[y]);
        }
        free(A);
        free(B);
        free(matrix);
    }
    return 0;
}
