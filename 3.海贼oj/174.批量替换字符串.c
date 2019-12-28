/*************************************************************************
	> File Name: 174.批量替换字符串.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月26日 星期三 20时41分27秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char c[1000005] = {0};
    scanf("%[^\n]s", c);
    for (int i = 0; i < strlen(c); i++) {
        if (c[i] == ' ') printf("%%20");
        else printf("%c", c[i]);
    }
    printf("\n");
    return 0;
}
