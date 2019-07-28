/*************************************************************************
	> File Name: 148.字符翻转.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月09日 星期日 22时17分48秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main(){
    char c[55] = {0};
    scanf("%s", c);
    for (int i = strlen(c) - 1; i >= 0; i--) {
        printf("%c", c[i]);
    }
    printf("\n");
    return  0;
}
