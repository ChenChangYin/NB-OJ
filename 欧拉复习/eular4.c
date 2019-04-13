/*************************************************************************
	> File Name: eular4.c
	> Author: 
	> Mail: 
	> Created Time: 2018年12月26日 星期三 16时36分16秒
 ************************************************************************/

#include <stdio.h>

int is_huiwen(int n) {
    int x = n, key = 0;
    while (x) {
        key = x % 10 + key * 10;
        x /= 10; 
    }
    return key == n;
}

int main() {
    int ans = 0;
    for (int i = 100; i < 999; i++) {
        for (int j = i; j < 999; j++) {
            if (i * j > ans && is_huiwen(i * j)) {
                ans = i * j;
            } 
        }
    }
    printf("%d\n", ans);
    return 0;
}
