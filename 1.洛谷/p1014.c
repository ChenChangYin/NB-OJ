/*************************************************************************
	> File Name: p1014.c
	> Author: 
	> Mail: 
	> Created Time: 2019年03月17日 星期日 09时44分42秒
 ************************************************************************/

#include<stdio.h>

int main() {
    int n = 0, a = 1, num, c;
    scanf("%d", &num);
    while (num > a) {
        num -= a;
        n++;
        a++;
    }
    c = n + 2 - num;
    if (n % 2 != 0) {
        printf("%d/%d\n", num, c);
    } else {
        printf("%d/%d\n", c, num);
    }
    return 0;
}
