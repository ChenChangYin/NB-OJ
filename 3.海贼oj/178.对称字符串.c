/*************************************************************************
	> File Name: 178.对称字符串.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月26日 星期三 19时29分00秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    char a = 'A';
    char b[500000] = "A";
    char c[500000] = {0};
    char s[10] = {0};
    scanf("%d", &n);
    strcpy(c, b);
    while (--n) {
        a++;
        strcpy(c, b);
        s[0] = a;
        strcat(c, s);
        strcat(c, b);
        strcpy(b, c);
    }
    printf("%s\n", c);
    return 0;
}
