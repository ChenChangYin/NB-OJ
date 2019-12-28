/*************************************************************************
	> File Name: 177.字母图形.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月26日 星期三 19时51分20秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char c[30] = {0};
    char d[30] = {0};
    scanf("%s", c);
    int l = strlen(c);
    for (int i = 0; i < l; i++) {
        strcpy(d, c);
        printf("%s\n", d);
        memset(d, 0, sizeof(d));
        strncpy(d, c + l - 2, 2);
        strncat(d + 2, c, strlen(c) - 2);
        strcpy(c, d);
    }
    return 0;
}
