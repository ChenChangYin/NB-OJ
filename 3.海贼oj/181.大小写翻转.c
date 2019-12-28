/*************************************************************************
	> File Name: 181.大小写翻转.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月25日 星期二 20时05分11秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] <= 'Z' && s[i] >= 'A') {
            s[i] += 32;
        } else if (s[i] <= 'z' && s[i] >= 'a') {
            s[i] -= 32;
        }
    }
    printf("%s\n", s);
    return 0;
}
