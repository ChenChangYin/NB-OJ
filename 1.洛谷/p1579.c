/*************************************************************************
	> File Name: p1579.c
	> Author: 
	> Mail: 
	> Created Time: 2019年03月16日 星期六 18时37分37秒
 ************************************************************************/

#include <stdio.h>
#define max 20005

int prime[max + 5] = {0};

void init() {
    for (int i = 2; i <= max; i++) {
        if (!prime[i]) {
            prime[++prime[0]] = i;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > max) break;
            prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) {
                break;
            }
        }
    }
    return ;
}

int main() {
    int n;
    init();
    scanf("%d", &n);
    
    for (int i = 1; prime[i] < n; i++) {
        for(int j = i; prime[j] < n - prime[i]; j++) {
            for (int p = j; prime[p] <= n - prime[i] - prime[j]; p++) {
                if ( (prime[i] + prime[j] + prime[p]) == n) {
                    printf("%d %d %d\n", prime[i], prime[j], prime[p]);
                    return 0;
                }
            }
        }
    }
    return 0;
}
