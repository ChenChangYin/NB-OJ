/*************************************************************************
	> File Name: 8513.c
	> Author: 
	> Mail: 
	> Created Time: 2019年04月17日 星期三 18时40分24秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int main() {
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        int N, K, a1[200015] = {0}, a2[200015] = {0};
        scanf("%d %d", &N, &K);
        for (int j1 = 0; j1 < N; j1++) {
            scanf("%d", &a1[j1]);
        }
        for (int j2 = 0; j2 < N; j2++) {
            scanf("%d", &a2[j2]);
        }
        sort(a1, a1 + N);
        sort(a2, a2 + N);
        int n = 0, h =  N - 1;
        for (int i = 0; i < N; i++) {
            for (int j = h; j >= 0; j--) {
                if (a1[i] + a2[j] >= K) {
                    n++;
                    h = j;
                    break;
                }
            }
        }
        printf("%d\n", n);
    }
    return 0;
}

