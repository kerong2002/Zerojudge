/*
 * e446 排列生成.c
 *
 *  Created on: 2022年7月19日
 *      Author: KeRong
 */
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int list[20];
bool appear[20];
void permutation(int n,int cnt){
	if(n==cnt){
		for(int x=0;x<n;x++){
			printf("%d ",list[x]);
		}
		printf("\n");
		return;
	}
	else{
		for(int x=1;x<=n;x++){
			if(appear[x]==false){
				list[cnt]=x;
				appear[x]=true;
				permutation(n,cnt+1);
				appear[x]=false;
			}

		}
	}

}
int main(){
	int n;
	scanf("%d",&n);
	permutation(n,0);
	return 0;
}

