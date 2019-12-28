/*************************************************************************
	> File Name: 2014.c
	> Author: 
	> Mail: 
	> Created Time: 2018年11月03日 星期六 11时17分31秒
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    while(scanf("%d", &n) != EOF) {
        double sum = 0;
        int t, max = 0, min = 100, m = n;
        while(n--) {
            scanf("%d", &t);
            if (t < min) min = t;
            if (t > max) max = t;
            sum += t;
        }
        sum = sum - min - max;
        printf("%.2lf\n", sum / (m - 2));
    }
    return 0;
}
