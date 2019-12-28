/*************************************************************************
	> File Name: 149.最后一个单词.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月09日 星期日 22时29分32秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    char s[55];
    scanf("%[^\n]s", s);
    int max = 0, n = 0;

    for (int i = strlen(s) - 1; s[i] != ' '; i--) {
        n++;
    }
    printf("%d\n", n);
    return 0;
}
