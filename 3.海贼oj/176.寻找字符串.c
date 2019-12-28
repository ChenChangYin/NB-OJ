/*************************************************************************
	> File Name: 176.寻找字符串.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月29日 星期六 11时14分48秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000

int main() {
    char a[MAX + 5] = {0};
    char b[MAX + 5] = {0};
    char c[MAX + 5] = {0};
    int num = 0;
    scanf("%[^\n]s", a);
    getchar();
    scanf("%[^\n]s", b);
    getchar();
    int len1 = strlen(a);
    int len2 = strlen(b);
    for (int i = 0; i < len1; i++) {
        for (int j = 0; j < len2; j++) {
            c[j] = a[i + j];
        }
        if (strcmp(c, b) == 0) num++;
    }
    printf("%d\n", num);
    return 0;
}
