#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char active[99][100005]={'\0'};
int size,index;
int y_set=0;
int df(int ans){
    index+=1;
    if(index%90000==0 && index!=0){
        index%=90000;
        y_set+=1;
    }
    if(active[y_set][index]=='0'){
        return 0;
    }
    else if(active[y_set][index]=='1'){
        return  ans*ans;
    }
    else{
        int set=0;
        for(int i=0;i<4;i++){
            set+=df(ans/2);
        }
        return set;
    }
}
int main(){
    int cnt=0;
    int y=0;
    char pick;
    while((pick=getchar())!='\n'){

        if(cnt!=0 && cnt%90000==0){
            cnt%=90000;
            y=y+1;
        }
        active[y][cnt]=pick;
        cnt+=1;
    }
    scanf("%d",&size);
    int run=0;
    index=-1;
    printf("%d\n",df(size));
        /*2020020100010*/
    return 0;
}
