/*************************************************************************
	> File Name: p1067.c
	> Author: 
	> Mail: 
	> Created Time: 2019年03月18日 星期一 18时34分40秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int n, num[100] = {0};
    scanf("%d", &n);
    
    for (int i = 0; i <= n; i++) {
        scanf("%d", &num[i]);
    }
    int a = n + 1;
    for (int i = 0; i <= n; i++) {
        a--;
        if (a == 0) {
            if (num[i] > 0) printf("+%d", num[i]);
            if (num[i] < 0) printf("-%d", num[i]);
            break;
        }
        if (num[i] == 0) continue;
        if (num[i] == 1) printf("+x^%d", a);
        if (num[i] == -1) printf("-x^%d", a);
        else if (num[i] > 1 && i) printf("+%dx^%d", num[i], a);
        else if (num[i] > 1 && i == 0) printf("%dx^%d", num[i], a);
        else if (num[i] < -1) printf("%dx^%d", num[i], a);
    }
    printf("\n");
    return 0;
}

