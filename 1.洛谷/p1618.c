/*************************************************************************
	> File Name: p1618.c
	> Author: 
	> Mail: 
	> Created Time: 2019年03月16日 星期六 08时59分21秒
 ************************************************************************/

#include <stdio.h>

int is_num(int a, int *num) {
    int temp;
    while (a) {
        temp = a % 10;
        if (num[temp] == 1) return 1;
        num[temp]++;
        a /= 10;
    }
    return 0;
}

int function(int a, int b, int c) {
    int num[10] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    
    if (is_num(a, num)) return 1;
    if (is_num(b, num)) return 1;
    if (is_num(c, num)) return 1;
    int sum = 0;
    for (int i = 1; i <= 9; i++) {
        sum += num[i];
    }
    if (sum != 9) return 1;
    return 0;
}

int main() {
    int A, B, C, ans;
    scanf("%d %d %d", &A, &B, &C);
    for (int i = 1; i <= 333; i++) {
        int a = A * i;
        int b = B * i;
        int c = C * i;
        if (b > 1000 || c > 1000) break;
        if (function(a, b, c) == 1) continue;
        printf("%d %d %d\n", a, b, c);
        ans = 1;
    }
    if (!ans) printf("No!!!\n");
    return 0;
}
