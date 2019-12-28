/*************************************************************************
	> File Name: p1618.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年03月16日 星期六 12时31分42秒
 ************************************************************************/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

int main() {
    int A, B, C, h = 0;
    scanf("%d %d %d", &A, &B, &C);
    int t = A * B * C;
    A = t / A;
    B = t / B;
    C = t / C;
    do {
        if ((a[1] * 100 + a[2] * 10 + a[3]) * A == (100 * a[4] + 10 * a[5] + a[6]) * B && (100 * a[1] + 10 * a[2] + a[3]) * A == (100 * a[7] + 10 * a[8] + a[9]) * C) {
            printf("%d%d%d %d%d%d %d%d%d\n", a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9]);
            h++;
        }
    } while(next_permutation(a + 1, a+10));
    if (h == 0) printf("No!!!\n");
    return 0;
}
