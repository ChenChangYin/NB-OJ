/*************************************************************************
	> File Name: 73.湖泊.cpp
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年05月23日 星期四 18时01分33秒
 ************************************************************************/
 #include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
#define MAX_N 1000
#define MAX_M 1000
#define MAX_NM 1000000
struct UnionSet {
    int fa[MAX_NM + 5], n;
    void init(int n) {
        this->n = n;
        for (int i = 0; i <= n; i++) fa[i] = i;
    }
    int get(int x) {
        return fa[x] = (fa[x] == x ? x : get(fa[x]));
    }
    void merge(int a, int b) {
        fa[get(a)] = get(b);
    }
};

UnionSet u;
int n, m;
int ind(int i, int j) {
    return i * m + j + 1;
}

char g[MAX_N + 5][MAX_M + 5];

int main() {
    cin >> n >> m;
    u.init(n * m);
    for (int i = 0; i < n; i++) cin >> g[i];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (g[i][j] != 'O') continue;
            if (i && g[i - 1][j] == 'O') u.merge(ind(i, j), ind(i - 1, j));
            if (j && g[i][j - 1] == 'O') u.merge(ind(i, j), ind(i, j - 1));
            if (i == 0 || i == n - 1) u.merge(ind(i, j), 0);
            if (j == 0 || j == m - 1) u.merge(ind(i, j), 0);
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (g[i][j] != 'O') continue;
            ans += (u.get(ind(i, j)) != u.get(0));
        }
    }
    cout << ans << endl;
    return 0;
}
