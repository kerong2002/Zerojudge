/*
 * e798 p5. 卷積神經網路.c
 *
 *  Created on: 2022年7月19日
 *      Author: KeRong
 */
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define max(x,y) ((x>=y)?x:y)
int main(){
	setbuf(stdout,NULL);
	int n;
	scanf("%d",&n);
	int **map=(int **)malloc(n*sizeof(int*));
	for(int y=0;y<n;y++){
		map[y]=(int *)malloc(n*sizeof(int));
	}
	for(int y=0;y<n;y++){
		for(int x=0;x<n;x++){
			scanf("%d",&map[y][x]);
		}
	}

	int **convolution=(int **)calloc(n/2,sizeof(int*));
	for(int y=0;y<n/2;y++){
		convolution[y]=(int *)calloc(n/2,sizeof(int));
		for(int x=0;x<n/2;x++){
			convolution[y][x]=INT_MIN;
		}
	}

	for(int y=0,row=0;y<n;y+=2,row+=1){
		for(int x=0,column=0;x<n;x+=2,column+=1){
			for(int add_y=0;add_y<=1;add_y++){
				for(int add_x=0;add_x<=1;add_x++){
//                    printf("(%d,%d)",x+add_x,y+add_y);
					convolution[row][column]=max(convolution[y/2][x/2],map[y+add_y][x+add_x]);
				}
			}
		}
	}
//	printf("\n");
	for(int y=0;y<n/2;y++){
		for(int x=0;x<n/2;x++){
			printf("%d ",convolution[y][x]);
		}
		printf("\n");
	}
	for(int y=0;y<n/2;y++){
		free(convolution[y]);
	}
	free(convolution);
	for(int y=0;y<n;y++){
		free(map[y]);
	}
	free(map);
	return 0;
}
