/*
 * e664 108 p2. 空氣盒子.c
 *
 *  Created on: 2022年7月18日
 *      Author: KeRong
 */
#include<stdio.h>
#include<stdlib.h>
#define true 1
#define false 0
int main(){
	int *month=(int *)calloc(32,sizeof(int));
	int cnt=1;
	while(scanf("%d",&month[cnt])!=EOF){
		cnt+=1;
	}
	int peak=false;
	int check=-1;
	int same=0;
	int have_peak=false;
	for(int x=1;x<cnt;x++){
		if(peak==true){
			if(month[x]==check){
				peak=true;
				same+=1;
			}
			else if(check>month[x]){
				if(same>0){
					printf("%d %d %d\n",x-same-1,x-1,month[x-1]);
					have_peak=true;
				}
				else{
					printf("%d %d\n",x-1,month[x-1]);
					have_peak=true;
				}
				peak=false;
				same=0;
				continue;
			}
			else{
				peak=false;
				same=0;
				continue;
			}
		}
		if(month[x]>month[x-1] && peak==false){
			peak=true;
			check=month[x];
		}

	}
	if(!have_peak){
		printf("0 0\n");
	}
	return 0;
}
/*
30 32 32 32 31 35 36 31 38 34 40 39 42 43 44 45 46 47 48 59 50 59 52 53 54 55 58 58 58
 */
