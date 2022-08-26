/*
 * d164 七、最佳選擇.c
 *
 *  Created on: 2022年7月13日
 *      Author: KeRong
 */
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define big(a,b) ((a>=b)?a:b)

typedef struct node{
	int data;
	struct node *next;
}Node;

void add_node(Node **start,int value);
void print_list(Node *node);
void free_list(Node *node);
void chose_cow(Node *node,int pick);

int max=INT_MIN;

int main(int argc,char *argv[]){
	int quantity,pick;
	while(scanf("%d %d",&quantity,&pick)!=EOF){
        max=INT_MIN;
        int *cow=(int *)calloc(quantity,sizeof(int));
        for(int x=0;x<quantity;x++){
            scanf("%d",&cow[x]);
        }
        Node *head=NULL;
        for(int x=0;x<quantity;x++){
            add_node(&head,cow[x]);
        }
        chose_cow(head,pick);
    //	print_list(head);
        printf("%d\n",max);
        free(cow);
        free_list(head);
	}
	return 0;
}
void add_node(Node **start,int value){
	Node *newnode=(Node *)malloc(sizeof(Node));
	newnode->data=value;
	newnode->next=NULL;
	if(*start==NULL){
		*start=newnode;
		(*start)->next=*start;
		return;
	}
	else{
		Node *current;
		current=*start;
		while(current->next!=*start){
			current=current->next;
		}
		current->next=newnode;
		newnode->next=*start;
		return;
	}
}
void print_list(Node *node){
	Node *first=node;
	printf("%d ",node->data);
	node=node->next;
	while(node!=NULL){
		if(node==first){
			break;
		}
		printf("%d ",node->data);
		node=node->next;
	}
	printf("%d\n",node->data);
}
void free_list(Node *node){
    int node_sum=1;
    Node *first=node;
    node=node->next;
    while(node!=first){
        node=node->next;
        node_sum+=1;
    }
    Node *current=first;
    Node *temp;
    for(int x=0;x<node_sum;x++){
        temp=current;
        current=current->next;
        free(temp);
    }
}
void chose_cow(Node *node,int pick){
	Node *first=node;

	while(node!=NULL){
		Node *run=node;
		int total=0;
		for(int x=0;x<pick;x++){
			total+=run->data;
			run=run->next;
		}
		max=big(max,total);
		node=node->next;
		if(node==first){
			break;
		}
	}
}
