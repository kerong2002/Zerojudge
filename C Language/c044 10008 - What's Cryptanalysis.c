#include<stdio.h>
#include<string.h>
int main(){
    int run;
    int english[26]={0};
    scanf("%d",&run);
    getchar();
    char sentence[99][9999]={'\0'};
    for(int x=0;x<run;x++){
        scanf("%[^\n]%*c",&sentence[x]);
    }
    for(int x=0;x<run;x++){
        for(int y=0;y<strlen(sentence[x]);y++){
            if(sentence[x][y]>=65 && sentence[x][y]<=90){
                english[sentence[x][y]-65]+=1;
            }
            else if(sentence[x][y]>=97 && sentence[x][y]<=122){
                english[sentence[x][y]-97]+=1;
            }
        }
    }
    int max=-1;
    for(int i=0;i<26;i++){
        if(english[i]>max){
            max=english[i];
        }
    }
    while(max>0){
        for(int j=0;j<26;j++){
            if(english[j]==max){
                printf("%c %d\n",j+65,english[j]);
            }
        }
        max--;
    }

    return 0;
}
