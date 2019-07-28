/*************************************************************************
	> File Name: 151.双手石头剪刀布.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月13日 星期四 20时09分01秒
 ************************************************************************/

#include<stdio.h>

int duiju(char a, char b) {
    if (a == b) return 0;  
    if (a == 'H') {
        if (b == 'O') {
            return 1;
        } else if (b == 'Y') {
            return -1;
        }
    }
    if (a == 'O') {
        if (b == 'Y') {
            return 1;
        } else if (b == 'H') {
            return -1;
        }
    }
    if (a == 'Y') {
        if (b == 'H') {
            return 1;
        } else if (b == 'O') {
            return -1;
        }
    }
}

int main() {
    char xl, xr, ll, lr;
    scanf("%s%s", &xl, &xr);
    scanf("%s%s", &ll, &lr);
    if (duiju(xl, ll) == 1) {
        if (duiju(xl, lr) == 1 || duiju(xl, lr) == 0) {
            printf("MING\n");
        } else if (duiju(xl, lr) == -1) {
            if (duiju(xr, lr) == 1) printf("MING\n");
            else printf("LIHUA\n");
        }
    } else if (duiju(xl,ll) == 0) {
        if (duiju(xr,lr) == 1) printf("MING\n");
        else if (duiju(xr, lr) == -1) printf("LIHUA\\n");
        else printf("TIE\n");
    } else if (duiju(xl,ll) == -1) {
        if (duiju(xr,ll) == -1 || duiju(xr, ll) == 0) printf("LIHUA\n");
        else {
            if (duiju(xr, lr) == 1 || duiju(xr, lr) == 0) printf("MING\n");
            if (duiju(xr, lr) == -1) printf("LIHUA\n");
        }

    }
    return 0;
}
