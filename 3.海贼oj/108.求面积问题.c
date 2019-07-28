/*************************************************************************
	> File Name: 108.求面积问题.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月07日 星期五 19时18分32秒
 ************************************************************************/

#include<stdio.h>

int main() {
    char c;
    double m, n;
    scanf("%c%lf%lf", &c, &m, &n);
    switch(c) {
        case 'r': printf("%.2lf\n", m * n); break;
        case 't': printf("%.2lf\n", m * n / 2); break;
    }
    return 0;
}
