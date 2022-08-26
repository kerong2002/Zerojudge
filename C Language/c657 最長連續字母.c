#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max(a,b) ((a)>(b)?(a):(b))
int main(){
    int english[2][27]={0};
    char list[99]={'\0'};
    while(scanf("%s",list)!=EOF){
        int cnt=0;
        for(int y=0;y<strlen(list);y++){
            int done=1;
            for(int x=y+1;x<=strlen(list);x++){
                if(list[y]==list[x]){
                    done+=1;
                }
                else if(list[y]!=list[x]){
                    english[0][cnt]=done;
                    english[1][cnt]=list[y];
//                    printf("%c %d\n",english[1][cnt],english[0][cnt]);
                    y+=done-1;
                    cnt+=1;
                    break;
                }
            }
        }
        int max_size=-1;
        for(int x=0;x<=26;x++){
            max_size=max(english[0][x],max_size);
        }
        for(int x=0;x<=26;x++){
            if(max_size==english[0][x]){
                printf("%c %d\n",english[1][x],english[0][x]);
                break;
            }
        }
        memset(list,'\0',sizeof(char)*99);
        memset(english,0,sizeof(int)*27);
    }
    return 0;
}
