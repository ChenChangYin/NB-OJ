/*************************************************************************
	> File Name: p1059.c
	> Author: 
	> Mail: 
	> Created Time: 2018年12月15日 星期六 19时45分00秒
 ************************************************************************/

#include <stdio.h>
#define max 100
#define swap(a, b) {\
    __typeof(a) __temp = a;\
    a = b; b = __temp;\
}

void quick_sort(int *num, int l, int r) {
    while (l < r) {
        int x = l, y = r, z = num[(l + r) >> 1];
        do {
            while (x <= y && num[x] < z) x++;
            while (x <= y && num[y] > z) y--;
            if (x <= y) {
                swap(num[x], num[y]);
                ++x, --y;
            }
        } while (x <= y);
        quick_sort(num, x, r);
        r = y;
    }
    return ;
}

void output(int *a, int n) {
    int temp = n;
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) temp--;
    }
    printf("%d\n", temp);
    printf("%d", a[0]);
    for (int j = 1; j < n; j++) {
        if (a[j] != a[j - 1]) {
            printf(" %d", a[j]);
        }
    }
    printf("\n");
    return ;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[max + 5] = {0};
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    quick_sort(a, 0, n - 1);
    output(a, n);
    return 0;
}
