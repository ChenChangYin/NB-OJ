/*************************************************************************
	> File Name: 117.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月05日 星期三 20时23分16秒
 ************************************************************************/

#include<stdio.h>

int is_num(int n) {
    int a = n, sum = 0;
    while (a) {
        sum = sum * 10 + a % 10;
        a /= 10;
    }
    if (sum == n) return 1;
    return 0;
}


int main() {
    int n;
    scanf("%d", &n);
    if (is_num(n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
