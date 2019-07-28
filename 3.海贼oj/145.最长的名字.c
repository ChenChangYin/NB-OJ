/*************************************************************************
	> File Name: 145.最长的名字.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月09日 星期日 21时57分51秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    int N, ans = 0;
    char c[105] = {0};
    char a[105] = {0};
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%s", c);
        int l = strlen(c);
        if (l > ans) {
            strcpy(a, c);
            ans = l;
        }
    }
    printf("%s\n", a);
    return 0;
}
