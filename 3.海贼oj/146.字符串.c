/*************************************************************************
	> File Name: 146.字符串.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月09日 星期日 22时02分36秒
 ************************************************************************/

#include<stdio.h>

int main() {
    char c[55] = {0};
    scanf("%s", c);
    for (int i = 0; c[i]; i++) {
        if (c[i] >= 'a' && c[i] < 'z' || c[i] >= 'A' && c[i] < 'Z') printf("%c", c[i] + 1);
        else if (c[i] == 'z') printf("a");
        else if (c[i] == 'Z') printf("A");
        else printf("%c", c[i]);
    }
    printf("\n");
    return 0;
}
