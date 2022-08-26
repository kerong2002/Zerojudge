#include<stdio.h>
#include<string.h>
int main(){
    char list[200][200]={' '};
    int run=0;
    while(scanf("%[^\n]%*c",list[run])!=EOF){
        run++;//每行每行句子輸入，直到EOF
    }

    int max_size=-1;
    for(int x=0;x<run;x++){
        int size=strlen(list[x]);
        if(size>max_size){
            max_size=size;
        }
    }
    for(int j=0;j<max_size;j++){
        for(int i=run-1;i>=0;i--){
            if(list[i][j]=='\0'){
                printf(" ");
            }
            else{
                printf("%c",list[i][j]);
            }

        }
        printf("\n");
    }
    return 0;
}
