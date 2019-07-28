/*************************************************************************
	> File Name: 71.朋友圈.cpp
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年05月23日 星期四 18时00分22秒
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
#define MAX_N 10000
struct UnionSet {
    int fa[MAX_N + 5];
    void init(int n) {
        for (int i = 1; i <= n; i++) fa[i] = i;
    }
    int get(int x) {
        return fa[x] = (fa[x] == x ? x : get(fa[x]));
    }
    void merge(int a, int b) {
        fa[get(a)] = get(b);
    }
};

int main() {
    UnionSet u;
    int n, m;
    cin >> n >> m;
    u.init(n);
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == 1) u.merge(b, c);
        else cout << (u.get(b) == u.get(c) ? "Yes" : "No") << endl;
    }
    return 0;
}
