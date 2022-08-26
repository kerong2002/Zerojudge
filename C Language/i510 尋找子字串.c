/*
 * i510 尋找子字串.c
 *
 *  Created on: 2022年7月21日
 *      Author: KeRong
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	setbuf(stdout,NULL);
	int n,m;
	while(scanf("%d %d",&n,&m)!=EOF){
		char *n_list=(char *)malloc((n+1)*sizeof(char));
		char *m_list=(char *)malloc((m+1)*sizeof(char));
		scanf("%s %s",n_list,m_list);
		char *position=strstr(n_list,m_list);
		if(position==NULL){
			printf("No\n");
		}
		else{
			printf("Yes\npos: %d\n",position-n_list);
		}
		free(n_list);
		free(m_list);
	}
	return 0;
}

