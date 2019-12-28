/*************************************************************************
	> File Name: 194.两数之和.cpp
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年07月26日 星期五 18时13分13秒
 ************************************************************************/

#include <stdlib.h>
#include <stdio.h>

#define MAX 100000

int main() {
    int n, k = 0, s;
    int num[MAX + 5] = {0};

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    scanf("%d", &s);
    for (int i = 0; i < n; i++) {
        int y = s - num[i];
        int l = i + 1, r = n - 1, mid;
        while (l <= r) {
            mid = (l + r) >> 1;
            if (num[mid] == y)  {
                printf("Yes\n");
                return 0;
            }
            if (num[mid] < y) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
    }
    printf("No\n");
    return 0;
}
