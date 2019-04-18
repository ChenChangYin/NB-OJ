/*************************************************************************
	> File Name: 1425.c
	> Author: 
	> Mail: 
	> Created Time: 2019年04月18日 星期四 19时53分03秒
 ************************************************************************/
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#define MAX 1000010

using namespace std;

long long int a[MAX + 5] = {0};

int main() {
    long long int n, k;
    scanf("%lld %lld", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (a[j] > a[i]) swap(a[j], a[i]);
        }
    }
    for (int i = 0; i < k; i++) {
        printf("%lld ", a[i]);
    }
    printf("\n");
    return 0;
}

