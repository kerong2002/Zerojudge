#include <stdio.h>
int main () {
	int i , j ;
	int C,R,col_c,row_c;
	int mat[100][100];
	while(scanf("%d %d",&C,&R)!=EOF) {

		for(j=0; j<C; j++) {
			for (i=0; i<R; i++){
				scanf("%d",&mat[j][i]);
			}
		}

		for(j=0; j<R; j++) {
			for (i=0; i<C; i++){
				printf("%d ",mat[i][j]);
			}
			printf("\n");
		}
	}
	return 0 ;
}
