/*
 * b139 NOIP2005 2.校門外的樹.c
 *
 *  Created on: 2022年7月4日
 *      Author: KeRong
 *  Spend time: 10m34s
 *      Result: AC (7ms, 140KB)
 *  ZERO JUDGE: 2022-07-04 21:34
 */

#include<stdio.h>
#include<stdlib.h>
int main(){
	int L,M;
	scanf("%d%d",&L,&M);
	int *tree_list=(int *)calloc(L+1,sizeof(int));
	while(M--){
		int start,end;
		scanf("%d%d",&start,&end);
		for(int x=start;x<=end;x++){
			if(tree_list[x]==0){
				tree_list[x]=1;
			}
		}
	}
	int tree_result=0;
	for(int x=0;x<=L;x++){
		tree_result+=tree_list[x];
	}
	printf("%d",L+1-tree_result);
	return 0;
}
