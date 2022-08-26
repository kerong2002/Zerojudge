/*
 * f818 物競天擇 (Survival).c
 *
 *  Created on: 2022年7月18日
 *      Author: KeRong
 */
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
//#define swap(x,y) {int t;t=x;x=y;y=t;}
int main(int argc,char *argv[]){
	int N;
	scanf("%d",&N);
	int min=INT_MAX;
	int *lion=(int *)calloc(2*N,sizeof(int));
	for(int y=0;y<2;y++){
		for(int x=0;x<N;x++){
			scanf("%d",&lion[y*N+x]);
		}
	}
	int *answer=(int *)malloc(2*sizeof(int));
	for(int x=0;x<N;x++){
		if(lion[x]*lion[x+N]<min){
			answer[0]=lion[x];
			answer[1]=lion[x+N];
			min=lion[x]*lion[x+N];
		}
	}
	for(int x=0;x<2;x++){
		printf("%d ",answer[x]);
	}
	free(lion);
	free(answer);
	return 0;
}

