/*************************************************************************
	> File Name: 172.排序名单.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月28日 星期五 20时57分12秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char name[15][25] = {0};
    for (int i = 0; i < 10; i++) {
        scanf("%s", name[i]);
    }
    for (int i = 0; i < 10; i++) {
        for (int j = i; j < 10; j++) {
            if (strcmp(name[i], name[j]) > 0) {
                char c[100] = {0};
                strcpy(c, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], c);
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        printf("%s\n", name[i]);
    }
    return 0;
}
