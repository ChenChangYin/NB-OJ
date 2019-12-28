/*************************************************************************
	> File Name: 166.字符串操作1.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月28日 星期五 18时13分47秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_N 10000

char A[MAX_N + 5] = {0};
char B[MAX_N + 5] = {0};
char C[MAX_N + 5] = {0};
int main() {
    int n;
    scanf("%s", A);
    scanf("%d", &n);
    scanf("%s", B);
    printf("%d\n", (int)strlen(A));
    for (int i = 0; i < strlen(A); i++) {
        if (A[i] == 'a') {
            printf("%d\n", i + 1);
            break;
        }
    }
    strcpy(C, A + n - 1);
    strcpy(A + n - 1, B);
    strcat(A, C);
    printf("%s\n", A);
    return 0;
}
