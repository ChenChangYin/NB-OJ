/*************************************************************************
	> File Name: 182.最大的数.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月25日 星期二 20时02分54秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int n, a, ans = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        if (a > ans) ans = a;
    }
    printf("%d\n", ans);
    return 0;
}
