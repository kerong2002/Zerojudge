#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
int cmp(const void *a,const void *b){
    return (*(int *)a-*(int *)b);
}
int main(){
    int T;
    scanf("%d%*c",&T);
    while(T--){
        char save[9999]={'\0'};
        char put_number[99][999]={'\0'};
        scanf("%[^\n]%*c",save);
        int cnt=0;
        char *get=strtok(save," ");
        while(get!=NULL){
            strcpy(put_number[cnt++],get);
            get=strtok(NULL," ");
        }
        int *list=(int *)calloc(cnt,sizeof(int));
        for(int x=0;x<cnt;x++){
            list[x]=atoi(put_number[x]);
        }
        qsort(list,cnt,sizeof(int),cmp);
        int minus=(list[cnt-1]-list[0])/(cnt-1);
        int *check=(int *)calloc(cnt,sizeof(int));
        int m,d;
        for(int x=0;x<cnt;x++){
            check[x]=list[0]+minus*x;
        }
        for(int y=1;y<=cnt-1;y++){
            int find=0;
            for(int x=1;x<=cnt-1;x++){
                if(list[x]>check[y]){
                    break;
                }
                if(list[x]==check[y]){
                    find=1;
                }
            }
            if(find==0){
                m=check[y];
                break;
            }
        }
        for(int x=1;x<cnt;x++){
            if(list[x]==list[x-1]){
                d=list[x];
                break;
            }
        }
        printf("%d %d\n",m,d);
        free(check);
        free(list);
    }
    return 0;
}
