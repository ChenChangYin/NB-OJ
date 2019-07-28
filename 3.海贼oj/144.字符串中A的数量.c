/*************************************************************************
	> File Name: 144.字符串中A的数量.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月09日 星期日 21时55分36秒
 ************************************************************************/

#include<stdio.h>

int main() {
    char c[105] = {0};
    scanf("%s", c);
    int ans = 0;
    for (int i = 0; c[i]; i++) {
        if(c[i] == 'A') ans++;
    }
    printf("%d\n", ans);
    return 0;
}
