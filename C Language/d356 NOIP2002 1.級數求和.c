/*
 * d356 NOIP2002 1.級數求和.c
 *
 *  Created on: 2022年7月5日
 *      Author: KeRong
 *  Spend time: 11m32s
 *      Result: AC (2ms, 84KB)
 *  ZERO JUDGE: 2022-07-05 20:52
 */
#include<stdio.h>
#include<stdlib.h>
int main(){
	double k;
	scanf("%lf",&k);
	double total=0.0;
	double n=1.0;
	while(total<=k){
		total+=1/n;
		n+=1.0;
	}
	printf("%0.f",(n-1.0));
	return 0;
}

