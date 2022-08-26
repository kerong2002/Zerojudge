/*
 * f410 芝麻街的郵件投遞.c
 *
 *  Created on: 2022年7月28日
 *      Author: KeRong
 */
int compare(const void *a,const void *b){
	return (*(int *)a-*(int *)b);
}
#include<stdio.h>
#include<stdlib.h>
int main(){
	setbuf(stdout,NULL);
	int n;
	scanf("%d",&n);
	int *list=(int *)calloc(n,sizeof(int));
	for(int x=0;x<n;x++){
		scanf("%d",&list[x]);
	}
	qsort(list,n,sizeof(list[0]),compare);
	for(int x=0;x<n;x++){
		if(list[x]%2==0){
			printf("%d ",list[x]);
		}
	}
	for(int x=n-1;x>=0;x--){
		if(list[x]%2!=0){
			printf("%d ",list[x]);
		}
	}
	free(list);
	return 0;
}
