/*
 * e968 2. 班級名單 (Student list).c
 *
 *  Created on: 2022年7月21日
 *      Author: KeRong
 */

#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){
	int n;
	scanf("%d",&n);
	int *list=(int *)calloc(n,sizeof(int));
	for(int x=0;x<3;x++){
		int s;
		scanf("%d",&s);
		list[s-1]=1;
	}
	for(int x=n-1;x>=0;x--){
		if(list[x]!=1){
			printf("No. %d\n",x+1);
		}
	}
	free(list);
	return 0;
}

