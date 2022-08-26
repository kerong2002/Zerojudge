#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d%*c",&n);
    int military[3]={0};
    char line[99];
    int count[3]={0};
    for(int x=0;x<n;x++){
        scanf("%s",line);
        if(strcmp(line,"Get_Kill")==0){
            military[0]++;
            count[0]++;
            if(count[0]<=2) printf("You have slain an enemie.\n");
            if(count[0]==3) printf("KILLING SPREE!\n");
            if(count[0]==4) printf("RAMPAGE~\n");
            if(count[0]==5) printf("UNSTOPPABLE!\n");
            if(count[0]==6) printf("DOMINATING!\n");
            if(count[0]==7) printf("GUALIKE!\n");
            if(count[0]>=8) printf("LEGENDARY!\n");
        }
        else if(strcmp(line,"Die")==0){
            military[1]++;
            printf("%s",count[0]>=3?"SHUTDOWN.\n":"You have been slained.\n");
            count[0]=0;
        }
        else if(strcmp(line,"Get_Assist")==0){
            military[2]++;
        }
    }
    printf("%d/%d/%d\n",military[0],military[1],military[2]);
    return 0;
}
