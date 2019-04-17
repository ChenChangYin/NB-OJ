/*************************************************************************
	> File Name: a.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月17日 星期三 19时06分43秒
 ************************************************************************/

#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int is_ans(long long int k, long long int a) {
    long long int sum = 1, h = k;
    while (k--) {
        sum *= h;
        if (sum > a) return 0;
    }
    if (sum <= a) return 1; 
    return 0;
}


int main() {
    long long int a;
    while(scanf("%lld", &a) != EOF) {
        long long int b;
        int n = 0;
        for (long long int i = 1; i <= a; i++) {
            if (is_ans(i, a) == 1) {
                n++;
            } else {
                break;
            }
        }
        printf("%d\n", n);
    }
    return 0;
}
