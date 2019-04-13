/*************************************************************************
	> File Name: eular9.c
	> Author: 
	> Mail: 
	> Created Time: 2019年01月06日 星期日 10时12分47秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int main() {
    int c;
    for (int a = 1; a < 500; a++) {
        for (int b = a; b < 500; b++) {
            c = 1000 - (a + b);
            if (c * c == a * a + b * b) {
                printf("%d * %d * %d = %d\n", a, b, c, a * b * c);
            }
        }
    }
    return 0;
}
