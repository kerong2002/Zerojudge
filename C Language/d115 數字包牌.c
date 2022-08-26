#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int n, m;
void dfs(int* input, int* save, int cnt, int search) {
    if (cnt < m) {
        save[cnt] = input[search];
        dfs(input, save, ++cnt, ++search);
        if (search < n - m +cnt) dfs(input, save, --cnt, search);
    }
    else {
        for (int x = 0; x < m; x++) {
            printf("%d ", save[x]);
        }
        printf("\n");
    }

}
int main() {
    while (scanf("%d", &n) != EOF) {
        if (!n)break;
        int* input = (int*)malloc(sizeof(int) * n);
        int* save = (int*)calloc(n, sizeof(int));
        for (int x = 0; x < n; x++) {
            scanf("%d", &input[x]);
        }
        scanf("%d", &m);
        //~~~~~~~~~~排列~~~~~~~~~~~~
        for (int i = 0; i < n; i++) {
            int hold = 0;
            for (int j = i + 1; j < n; j++) {
                if (input[i] > input[j]) {
                    hold = input[i];
                    input[i] = input[j];
                    input[j] = hold;
                }
            }
        }
        //~~~~~~~~~~dfs~~~~~~~~~~~~~~~~~~~
        dfs(input, save, 0, 0);
        free(save);
        free(input);
    }
    return 0;
}
