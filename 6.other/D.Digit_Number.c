/*************************************************************************
	> File Name: D.Digit_Number.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年04月20日 星期六 20时43分22秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int main() {
    int a, b, ans;
    while (~scanf("%d%d", &a, &b)) {
        ans = a + b;
        printf("%d\n", (int)log10(ans) + 1);
    }
    return 0;
}
