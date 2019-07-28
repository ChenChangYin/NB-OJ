/*************************************************************************
	> File Name: 147.大数的奇偶数判断.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月09日 星期日 22时10分00秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    char c[10010] = {0};
    scanf("%s", c);
    int l = strlen(c);
    int n = c[l - 1];
    if (n % 2) printf("NO\n");
    else printf("YES\n");
    return 0;
}
