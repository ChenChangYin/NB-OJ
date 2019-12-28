/*************************************************************************
	> File Name: p1025.c
	> Author: 
	> Mail: 
	> Created Time: 2019年04月06日 星期六 19时11分26秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int is_ans(int n, int k) {
    if (n < k) return 0;
    if (k == 0) return 0;
    if (n == k + 1 || n == k) return 1;
    if (k == 1) return 1;
    return is_ans(n - 1, k - 1) + is_ans(n - k, k);
}

int main() {
    int n, k, ans;
    scanf("%d%d", &n, &k);
    if (n < k) {
        printf("0\n");
        return 0;
    }
    ans = is_ans(n, k);
    printf("%d\n", ans);
    return 0;
}
