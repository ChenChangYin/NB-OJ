/*************************************************************************
	> File Name: p1464.c
	> Author: 
	> Mail: 
	> Created Time: 2019年03月17日 星期日 10时50分08秒
 ************************************************************************/

#include <stdio.h>
typedef long long ll;

ll rqt[25][25][25] = {0};

ll w(ll a, ll b, ll c) {
    if (a <= 0 || b <= 0 || c <= 0) return 1;
    else if (rqt[a][b][c] != 0) return rqt[a][b][c];
    else if (a > 20 || b > 20 || c > 20) rqt[a][b][c] = w(20, 20, 20);
    else if (a < b && b < c) rqt[a][b][c] = (w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c));
    else rqt[a][b][c] = (w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1));
    return rqt[a][b][c];
}

int main() {
    ll a, b, c;
    while(1) {
        scanf("%lld %lld %lld", &a, &b, &c);
        if (a == -1 && b == -1 && c == -1) break;
        if (a > 20) a = 21;
        if (b > 20) b = 21;
        if (c > 20) c = 21;
        printf("w(%lld, %lld, %lld) = %lld\n", a, b, c, w(a, b, c));
    }
    return 0;
}
