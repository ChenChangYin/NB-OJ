/*************************************************************************
	> File Name: 173.统计字符个数.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月28日 星期五 20时33分21秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char a[100000] = {0};
    int n = 0, z = 0, k = 0, q = 0;
    scanf("%[^\n]s", a);
    for (int i = 0; i < strlen(a); i++) {
        if (a[i] >= '0' && a[i] <= '9') {
            n++;
        } else if (a[i] >= 'a' && a[i] <= 'z') {
            z++;
        } else if (a[i] == ' ') {
            k++;
        } else {
            q++;
        }
    }
    printf("%d %d %d %d\n", z, n, k, q);
    return 0;
}
