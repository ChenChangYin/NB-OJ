/*************************************************************************
	> File Name: 1042.c
	> Author: 
	> Mail: 
	> Created Time: 2019年03月02日 星期六 16时25分52秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

#define max 1000000

int n_num[max + 5] = {0};

int main() {
    int N;
    while(scanf("%d", &N) != EOF) {
        n_num[0] = n_num[1] = 1;
        for (int i = N; i > 1; i--) {
            for (int j = 1; j <= n_num[0]; j++) {
                n_num[j] *= i;
            }
            for (int j = 1; j <= n_num[0]; j++) {
                if (n_num[j] < 10) continue;
                n_num[j + 1] += n_num[j] / 10;
                n_num[j] %= 10;
                n_num[0] += (j == n_num[0]);
            }
        }
        for (int j = n_num[0]; j > 0; j--) {
    	    printf("%d", n_num[j]);
        }
        printf("\n");
        memset(n_num, 0, sizeof(n_num));
    }
    return 0;
}
