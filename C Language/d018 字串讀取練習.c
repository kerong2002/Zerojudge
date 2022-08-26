#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char save[9999]={'\0'};
    while(scanf("%[^\n]%*c",save)!=EOF){
        char cut[999][99]={'\0'};
        int cnt=0;
        char *pick=strtok(save," ");
        while(pick!=NULL){
            strcpy(cut[cnt++],pick);
            pick=strtok(NULL," ");
        }
        double answer=0.0;
        for(int x=0;x<cnt;x++){
            int run=0;
            char ouput[2][999]={'\0'};
            char *put=strtok(cut[x],":");
            while(put!=NULL){
                strcpy(ouput[run++],put);
                put=strtok(NULL," ");
            }
            int order=atoi(ouput[0]);
            double number=atof(ouput[1]);
            if(order%2==1){
                answer+=number;
            }
            else{
                answer-=number;
            }
//            printf("(%d %f)\n",order,number);
        }
        printf("%g\n",answer);
    }
    return 0;
}
