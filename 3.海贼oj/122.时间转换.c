/*************************************************************************
	> File Name: 122.时间转换.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月06日 星期四 18时34分31秒
 ************************************************************************/

#include <stdio.h>


int main() {
    int t;
    scanf("%d", &t);
    int H, F, M;
    H = t / 3600;
    if (H > 12) H -= 12;
    F = (t % 3600) / 60;
    M = t % 60;
    if (t < 43200) {
        printf("%02d:%02d:%02d am\n", H, F, M);
    } else if (t < 46800) {
        printf("%02d:%02d:%02d midnoon\n", H, F, M);
    } else {
        printf("%02d:%02d:%02d pm\n", H, F, M);
    }
    
    return 0;
}

