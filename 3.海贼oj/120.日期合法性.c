/*************************************************************************
	> File Name: 113.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月05日 星期三 20时00分08秒
 ************************************************************************/

#include<stdio.h>



int main() {
    int y, m, d;
    scanf("%d%d%d", &y, &m, &d);
    if (y < 0 || m < 0 || m > 12 || d < 0) {
        printf("NO\n");
        return 0;
    }
    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
        switch(m) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12: if (d <= 31) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }; break;
            case 2: if (d <= 29) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }; break;
            case 4:
            case 6:
            case 9:
            case 11: if (d <= 30) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }; break;
        }
    } else {
        switch(m) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12: if (d <= 31) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }; break;
            case 2: if (d <= 28) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }; break;
            case 4:
            case 6:
            case 9:
            case 11: if (d <= 30) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }; break;
        }

    }
    return 0;
}
