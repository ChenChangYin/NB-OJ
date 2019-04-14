/*************************************************************************
	> File Name: p1440.c
	> Author: 
	> Mail: 
	> Created Time: 2019年04月14日 星期日 16时23分13秒
 ************************************************************************/

#include <stdio.h>

#define MAX_N 2000000

int q[MAX_N + 5] = {0}, head = 0, tail = 0;
int ind[MAX_N + 5] = {0};


int main() {
    int n, m, a;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) {
        printf("%d\n", q[head]);
        scanf("%d", &a);
        while (tail - head && i - ind[head] >= m) head++;//过期出队
        while (tail - head && q[tail - 1] > a) tail--;
        q[tail] = a;
        ind[tail] = i;
        tail++;
    }
    return 0;
}

