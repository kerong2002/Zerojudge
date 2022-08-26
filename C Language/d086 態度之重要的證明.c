#include<stdio.h>
#include<string.h>
int main(){
    char input[300];
    while(scanf("%s",&input)!=EOF){
        if(input[0]==48 && input[1]=='\0')break;
        else{
            int sum=0;
            int error=0;
            for(int x=0;x<strlen(input);x++){
                if(input[x]>=97 && input[x] <=122){
                    sum+=input[x]-96;
                }
                else if(input[x]>=65 && input[x] <=90){
                    sum+=input[x]-64;
                }
                else{
                    error=-1;
                }
            }
            if(sum>0 && error!=-1){
                printf("%d\n",sum);}
            else{
                printf("Fail\n");
            }
        }

    }
    return 0;
}
