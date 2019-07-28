/*************************************************************************
	> File Name: 47.多重背包.cpp
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年05月26日 星期日 19时00分19秒
 ************************************************************************/

#include<iostream>
using namespace std;

#define MAX_N 100
#define MAX_V 100000
int dp[MAX_V + 5];
int v[MAX_N + 5], w[MAX_N + 5], s[MAX_N + 5];


int main() {
    int n, V;
    cin >> V >> n;
    for (int i = 0; i < n; i++) cin >> v[i] >> w[i] >> s[i];
    for (int i = 0; i < n; i++) {
        int k = 1;
        while (s[i]) {
            for (int j = V; j >= v[i] * k; j--) {
                dp[j] = max(dp[j], dp[j - v[i] * k] + w[i] * k);
            }
            s[i] -= k;
            k = min(k * 2, s[i]);
        }
    }
    cout << dp[V] << endl;
    return 0;
}
