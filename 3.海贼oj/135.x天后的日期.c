/*************************************************************************
	> File Name: 113.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月05日 星期三 20时00分08秒
 ************************************************************************/

#include<stdio.h>



int main() {
    int n;
    int y, m, d;
    scanf("%d", &n);
    scanf("%d%d%d", &y, &m, &d);
    int ansy, ansm, ansd;
    d += n;
    while(d > 31) {
        if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
            if (m == 2 && d > 29) {
                m++;
                d -= 29;
            } 
            if (d > 31) {
                if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
                    if (m == 12) {
                        m = 1;
                        y++;
                    } else {
                        m++;
                    }
                    d -= 31;   
                } else {
                    m++;
                    d -= 30;
                }
            }
        } else {
            if (m == 2 && d > 28) {
                m++;
                d -= 28;
            } 
            if (d > 31) {
                if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
                    if (m == 12) {
                        m = 1;
                        y++;
                    } else {
                        m++;
                    }
                    d -= 31;   
                } else {
                    m++;
                    d -= 30;
                }
            }
        }
    }
    printf("%d %d %d\n", y, m, d);
    return 0;
}
