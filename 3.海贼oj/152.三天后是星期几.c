/*************************************************************************
	> File Name: 152.三天后是星期几.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月13日 星期四 19时48分24秒
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    char name[8][10] = {"Sunday","Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    scanf("%d", &n);
    printf("%s\n", name[(n + 3) % 7]);
    return 0;
}
