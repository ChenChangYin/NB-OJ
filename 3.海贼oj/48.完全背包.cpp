/*************************************************************************
	> File Name: 47.完全背包.cpp
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年05月26日 星期日 18时57分41秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_N 100
#define MAX_V 10000
int dp[MAX_V + 5];
int v[MAX_N + 5], w[MAX_N + 5];


int main() {
    int n, V;
    cin >> V >> n;
    for(int i = 1; i <= n; i++) cin >> v[i] >> w[i];
    for(int i = 1; i <= n; i++) {
        for(int j = V; j >= v[i]; j--) {
            dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
        }
    }
    cout << dp[V] << endl;
    return 0;
}
