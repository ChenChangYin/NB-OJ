/*************************************************************************
	> File Name: p1044.c
	> Author: 
	> Mail: 
	> Created Time: 2019年04月14日 星期日 15时36分21秒
 ************************************************************************/

#include <stdio.h>

int main() {
    long long int num[20] = {0};
    num[1] = num[0] = 1;
    num[2] = 2;
    int n;
    scanf("%d", &n);
    for (int i = 3; i < 20; i++) {
        int x = 1;
        while(x <= i) {
            num[i] += num[x-1] * num[i-x];
            x++;
        }
    }
    printf("%lld\n", num[n]);
    return 0;
}

