/*************************************************************************
	> File Name: 115.彩票.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月07日 星期五 19时36分59秒
 ************************************************************************/

#include<stdio.h>

int main() {
    int x, y;
    scanf("%d%d", &x, &y);
    int ans = 0;
    if (x == y) {
        ans = 100;
    } else if (x / 10 == y % 10 && x % 10 == y / 10) {
        ans = 20;
    } else if (x / 10 == y % 10 || x / 10 == y / 10 || x % 10 == y % 10 || x % 10 == y / 10) {
        ans = 2;
    }
    printf("%d\n", ans);
    return 0;
}
