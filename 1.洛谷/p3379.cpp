/*************************************************************************
	> File Name: text.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月13日 星期六 18时32分33秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>

using namespace std;

#define MAX_M 1000000
#define MAX_N 500000
#define MAX_K 19

struct Edge {
    int to, next;
} g[MAX_M + 5];

int head[MAX_N + 5] = {0}, cnt = 0;
int gas[MAX_N + 5][MAX_K + 5] = {0}, deep[MAX_N + 5] = {0};

inline void add(int a, int b) {
    g[++cnt].to = b;
    g[cnt].next = head[a];
    head[a] = cnt;
    return ;
}

void dfs1(int fa, int ind) {
    for (int i = 1; i <= MAX_K; i++) {
        gas[ind][i] = gas[gas[ind][i - 1]][i - 1];
    }
    for (int i = head[ind]; i; i = g[i].next) {
        if (g[i].to == fa) continue;
        int to = g[i].to;
        deep[to] = deep[ind] + 1;
        gas[to][0] = ind;
        dfs1(ind, to);
    }
    return ;
}

int lca(int x, int y) {
    if (deep[x] < deep[y]) swap(x, y);
    for (int i = MAX_K; i >= 0; i--) {
        if (deep[gas[x][i]] < deep[y]) continue;
        x = gas[x][i];
    }
    if (x == y) return x;
    for (int i = MAX_K; i >= 0; i--) {
        if (gas[x][i] == gas[y][i]) continue;
        x = gas[x][i], y = gas[y][i];
    }
    return gas[x][0];
}


int main() {
    int n, m, s;
    scanf("%d%d%d", &n, &m, &s);
    for (int i = 1; i < n; i++) {
        int a, b;
        scanf("%d%d", &a, &b);
        add(a, b);
        add(b, a);
    }
    deep[0] = -1;
    dfs1(0, s);
    for (int i = 0; i < m; i++) {
        int a, b;
        scanf("%d%d", &a, &b);
        printf("%d\n", lca(a, b));
    }
    return 0;
}
