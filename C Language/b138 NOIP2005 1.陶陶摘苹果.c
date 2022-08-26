/*
 * b138 NOIP2005 1.陶陶摘苹果.c
 *
 *  Created on: 2022年7月4日
 *      Author: KeRong
 *  Spend time: 3m40s
 *      Result: AC (12ms, 84KB)
 *  ZERO JUDGE: 2022-07-04 21:20
 */

#include<stdio.h>
#include<stdlib.h>

int main(){
	int apple_tree[10]={0};
	for(int x=0;x<10;x++){
		scanf("%d",&apple_tree[x]);
	}
	int handle;
	scanf("%d",&handle);
	int can_pick_up=0;
	for(int x=0;x<10;x++){
		if(apple_tree[x]<=(handle+30)){
			can_pick_up+=1;
		}
	}
	printf("%d",can_pick_up);
	return 0;
}
