/*************************************************************************
	> File Name: eular13.c
	> Author: 
	> Mail: 
	> Created Time: 2019年01月06日 星期日 11时58分11秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    char team[55];
    int ans[55] = {0};
    while(scanf("%s", team) != EOF) {
        int len = strlen(team);
        if (len > ans[0]) ans[0] = len;
        for (int i = 0, j = len; team[i]; i++, j--) {
            ans[j] += team[i] - '0';// 从低位向高位相加
        }
        for (int j = 1; j <= ans[0]; j++) {
            if (ans[j] < 10) continue;
            ans[j + 1] += ans[j] / 10;
            ans[j] %= 10;
            ans[0] += (j == ans[0]);
        }
    }
    for (int j = ans[0]; j > ans[0] - 10; j--) {
        printf("%d", ans[j]);
    }
    printf("\n");
    return 0;
}
