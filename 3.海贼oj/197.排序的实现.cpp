/*************************************************************************
	> File Name: 197.排序的实现.cpp
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年07月26日 星期五 20时43分43秒
 ************************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
using namespace std;

bool func(int a, int b) {
    return a > b;
}

int main() {
    int num[15] = {0};
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }
    sort(num, num + 10, func);
    for (int i = 0; i < 10; i++) {
        if (i) printf(" ");
        printf("%d", num[i]);
    }
    return 0;
}
