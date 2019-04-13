/*************************************************************************
	> File Name: eular15.c
	> Author: ChenChangYin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年01月08日 星期二 16时40分19秒
 ************************************************************************/

#include <stdio.h>
  
int main() {
    long long int ans = 1, m = 20;
    for (int i = 40; i > 20; i--) {
        ans *= i;
        while (ans % m == 0 && m != 1) {
            ans /= m;
            m--;
        }
    }
    printf("%lld\n", ans);
    return 0;
}

