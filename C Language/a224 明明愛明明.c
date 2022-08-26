#include<stdio.h>
#include<string.h>
int main(){
    char sentence[1000] = {'\0'};
    while(scanf("%s",sentence)!=EOF){
        int count[26]={0};
        int size=strlen(sentence);
		for(int i =0;i<size;i++){
			if(97<=sentence[i]&&sentence[i]<=122){
				count[sentence[i]-97]+=1;
			}
			if(65<=sentence[i]&&sentence[i]<=90){
				count[sentence[i]-65]+=1;
			}
		}
		int odd=0;
		for(int i=0;i<26;i++){
			if(count[i]%2!=0){
				odd++;
				if(odd==2)break;
			}
		}

        printf("%s\n",odd<2?"yes !":"no...");
	}
	return 0;
}
