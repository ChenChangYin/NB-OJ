/*************************************************************************
	> File Name: 281.前缀统计.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月18日 星期二 18时04分59秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define MAX_POOL 1000000
#define MAX_BASE 26

struct Node {
    int flag;
    int next[26];
} trie[MAX_POOL + 5];

int cnt = 1;
inline int getNode() {
    return ++cnt;
}

void insert(int ind, const char *str) {
    int p = ind;
    for (int i = 0; str[i]; i++) {
        if (trie[p].next[str[i] - 'a'] == 0) {
            trie[p].next[str[i] - 'a'] = getNode();
        }
        p = trie[p].next[str[i] - 'a'];
    }
    trie[p].flag += 1;
    return ;
}

int query(int ind, const char *str) {
    int p = ind;
    int ans = 0;
    for (int i = 0; str[i]; i++) {
        if (p == 0) break;
        p = trie[p].next[str[i] - 'a'];
        ans += trie[p].flag;
    }
    return ans;
}

char str[MAX_POOL + 5];

int main() {
    int n;
    int m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%s", str);
        insert(1, str);
    }
    for (int i = 0; i < m; i++) {
        scanf("%s", str);
        printf("%d\n", query(1, str));
    }
   return 0;
}
