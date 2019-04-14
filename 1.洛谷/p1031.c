/*************************************************************************
	> File Name: p1031.c
	> Author: 
	> Mail: 
	> Created Time: 2018年12月23日 星期日 19时55分31秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int n, sum = 0, num, ans = 0;
    int temp[105] = {0};
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &temp[i]);
        sum += temp[i];
    }
    num = sum / n;
    for (int i = 1; i <= n; i++) {
        if (temp[i] == num) continue;
        ans++;
        if (temp[i] > num) {
            temp[i + 1] += temp[i] - num;
        }
        if (temp[i] < num) {
            temp[i + 1] = temp[i + 1] - (num - temp[i]);
        }
    }
    printf("%d\n", ans);
    return 0;
}
