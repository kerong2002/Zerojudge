/*
 * c636 十二生肖.c
 *
 *  Created on: 2022年7月21日
 *      Author: KeRong
 */
#include<stdio.h>
#include<stdlib.h>

int main(){
	char list[12][9]={"鼠","牛","虎","兔","龍","蛇","馬","羊","猴","雞","狗","豬"};
	int n;
	while(scanf("%d",&n)!=EOF){
        if(n>0){
            printf("%s\n",list[(n-1)%12]);
        }
		else{
            printf("%s\n",list[abs(n+120)%12]);
		}
	}
	return 0;
}

