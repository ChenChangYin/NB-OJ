/*************************************************************************
	> File Name: 169.密码翻译.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月28日 星期五 20时12分57秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_N 30000

int main() {
    int n;
    int a[30] = {0};
    char s[MAX_N + 5] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char c;
        int d;
        getchar();
        scanf("%c", &c);
        getchar();
        scanf("%d", &d);
        a[c - 'A'] = d;
    }
    scanf("%s", s);
    int ans = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] < 'A' || s[i] > 'Z') continue;
        ans += a[s[i] - 'A'];
    }
    printf("%d\n", ans);
    return 0;
}
