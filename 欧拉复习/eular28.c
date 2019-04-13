/*************************************************************************
	> File Name: eular28.c
	> Author: ChenChangYin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年01月11日 星期五 10时39分08秒
 ************************************************************************/

#include <stdio.h>
  
int main() {
    int l = 3, sum = 1;
    while (l <= 1001) {
        sum += 4 * l * l- 6 * (l - 1);
        l += 2;
    }
    printf("%d\n", sum);
    return 0;
}

