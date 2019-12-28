/*************************************************************************
	> File Name: 50.扔鸡蛋.cpp
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年05月26日 星期日 20时38分42秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_N 32
#define MAX_K 65536
long long int dp[MAX_N + 5][MAX_K + 5];


int main() {
    int n, m;
    cin >> n >> m;
    if (n == 1) {
        cout << m << endl;
        return 0;
    }
    for(int i = 2; i <= n; i++) {
        for(int j = 1; dp[i][j - 1] < m; j++) {
            int val1;
            if(i - 1 == 1) val1 = j - 1;
            else val1 = dp[i -1 ][j - 1];
            dp[i][j] = val1 + dp[i][j - 1] + 1;
        }
    }
    int k = 1;
    while(dp[n][k] < m) k++;
    cout << k << endl;
    return 0;
}
