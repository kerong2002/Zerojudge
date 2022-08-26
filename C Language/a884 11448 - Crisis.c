#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        char *a=(char *)malloc(100001*sizeof(char));
        char *b=(char *)malloc(100001*sizeof(char));
        scanf("%s %s",a,b);
        if(strlen(a)>strlen(b)){
            char *rev_a=(char *)malloc((strlen(a)+1)*sizeof(char));
            for(int x=strlen(a)-1;x>=0;x--){

            }
        }
        else if(strlen(a)==strlen(b)){
            int small=0;
            for(int x=0;x<strlen(a)){
                if(a[x]<b[x]){
                    small=1;
                    break;
                }
            }

        }
        else{

        }
        free(a);
        free(b);
    }
    return 0;
}
