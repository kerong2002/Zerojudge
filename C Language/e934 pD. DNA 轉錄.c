#include<stdio.h>
#include<string.h>
int main(){
    char DNA[1000]={'\0'};
    scanf("%s",DNA);
    int size=strlen(DNA);
    for(int x=0;x<size;x++){
        switch(DNA[x]){
            case 'T':
                DNA[x]='A';
                break;
            case 'A':
                DNA[x]='U';
                break;
            case 'G':
                DNA[x]='C';
                break;
            case 'C':
                DNA[x]='G';
                break;
        }
    }
    printf("%s",DNA);
    return 0;
}
