/*************************************************************************
	> File Name: p1478.c
	> Author: 
	> Mail: 
	> Created Time: 2019年03月16日 星期六 18时08分08秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;

int main() {
    int n, s, a, b, l, ans = 0;
    scanf("%d %d", &n, &s);
    scanf("%d %d", &a, &b);
    l = a + b;
    int x[n], y[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x[i], &y[i]);
        if (x[i] > l) y[i] = 1005;
    }
    sort(y, y + n);
    for (int i = 0; i < n; i++) {
        if (s < y[i]) break;
        else {
            s = s - y[i];
            ans++;
        }
    }
    printf("%d\n", ans);
    return 0;
}
