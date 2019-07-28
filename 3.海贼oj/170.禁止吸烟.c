/*************************************************************************
	> File Name: 170.禁止吸烟.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月28日 星期五 20时59分58秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 1000

char str[max][max] = {0};
int len[max] = {0};
char ban[max] = {0};
char no[max] = {0};
char str1[max] = {0};

int main() {
    int n;
    scanf("%d", &n);
    strcpy(ban, "Ban_smoking");
    strcpy(no, "No_smoking");
    for (int i = 0; i < n; i++) {
        scanf("%s", str[i]);
        len[i] = strlen(str[i]);
    }
    for (int i = 0; i < n; i++) {
        memset(str1, 0, sizeof(str1));
        for (int j = 0; j < len[i]; j++) {
            if (strncmp(str[i] + j, ban, strlen(ban)) == 0) {
                strcat(str1, no);
                j += strlen(ban) - 1;
            } else {
                strncat(str1, str[i] + j, 1);
            }
        }
        strcpy(str[i], str1);
    }
    for (int i = 0; i < n; i++) {
        printf("%s\n", str[i]);
    }
    return 0;
}
