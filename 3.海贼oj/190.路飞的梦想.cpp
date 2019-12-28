/*************************************************************************
	> File Name: 190.路飞的梦想.cpp
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年07月26日 星期五 15时39分49秒
 ************************************************************************/

#include <stdlib.h>
#include <stdio.h>

#define MAX 8000000

int num[MAX + 5] = {0};
void init(int n) {
    num[0] = num[1] = 1;
    for (int i = 2; i * i <= n; i++)  {
        if (!num[i]) {
            for (int j = 2; i * j <= n; j++) {
                num[i * j] = 1;
            }
        }
    }
    return ;
}
int main() {
    int n;
    scanf("%d", &n);
    init(n);
    int ans = 0;
    for (int i = 2; i * 2 <= n; i++) {
        if (!num[i] && !num[n - i]) {
            ans++;
        }
    }
    printf("%d\n", ans);
    return 0;
}
