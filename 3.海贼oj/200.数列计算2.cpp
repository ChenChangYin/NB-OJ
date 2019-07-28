/*************************************************************************
	> File Name: 200.数列计算2.cpp
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年07月27日 星期六 16时33分41秒
 ************************************************************************/

#include <stdlib.h>
#include <stdio.h>

int main() {
    int n;
    double a = 4, b = 7, ans = a / b;
    scanf("%d", &n);
    n--;
    while(n--) {
        int c = a;
        a = b;
        b += c;
        ans += (a / b);
    }
    printf("%d/%d\n", (int)a, (int)b);
    printf("%0.2lf\n", ans);
    return 0;
}
