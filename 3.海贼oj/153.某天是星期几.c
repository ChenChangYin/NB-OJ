/*************************************************************************
	> File Name: 153.某天是星期几.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月14日 星期五 20时12分23秒
 ************************************************************************/
#include <stdio.h>


int main() {
    int ans, h, q, m, k, j;
    int year, month, day;
    scanf("%d%d%d", &year, &month, &day);
    q = day;
    m = month > 2 ? month : month + 12;
    j = m > 12 ? (year - 1) / 100 : year / 100;
    k = m > 12 ? (year - 1) % 100 : year % 100;
    h = (q + (26 * (m + 1) / 10) + k + (k / 4) + (j / 4) + (5 * j)) % 7;
    h = h > 1 ? h - 1 : h + 6;
    printf("%d\n", h);
    return 0;
}
