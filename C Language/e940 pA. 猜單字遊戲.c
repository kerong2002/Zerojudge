#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
    char scrabble[10] = { '\0' };
    int guess, size;
    scanf("%s", &scrabble);
    size = strlen(scrabble);
    scanf("%d", &guess);
    char* reply = (char*)calloc(size, sizeof(char));
    for (int x = 0; x < size; x++) {
        reply[x] = '*';
    }
    for (int x = 0; x < size; x++) {
        printf("%c", reply[x]);
    }
    printf("\n");
    getchar();
    while (guess--) {
        char surmise;
        scanf("%c%*c", &surmise);
        for(int x=0;x<size;x++){
            if(surmise==scrabble[x]){
                reply[x]=scrabble[x];
            }
        }
        for (int x = 0; x < size; x++) {
            printf("%c", reply[x]);
        }
        printf("\n");
    }
    free(reply);
    return 0;
}
