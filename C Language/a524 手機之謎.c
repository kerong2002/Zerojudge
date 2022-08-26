#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
//遞迴函數通常分成兩個部分
/*
    1.遞迴結束條件
    2.遞迴內容
*/
int ans[21];
bool appear[21];
void permutation(int n, int cnt) {
    if (cnt == n) {
        for (int i = 0; i < n; i++) {
            printf("%d", ans[i]);
        }
        printf("\n");
        return;
    }
    for (int i = n; i >=1; i--) {
        if (appear[i] == false) {
            ans[cnt] = i;
            appear[i] = true;
            permutation(n, cnt + 1);
            appear[i] = false;
        }

    }

}
int main() {
    int n;
    while(scanf("%d", &n)!=EOF){
        permutation(n, 0);
    }
    return 0;
}

