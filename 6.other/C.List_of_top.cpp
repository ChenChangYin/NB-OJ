/*************************************************************************
	> File Name: C.List_of_top.cpp
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年04月20日 星期六 20时39分49秒
 ************************************************************************/

#include <iostream>
#include <algorithm>

using namespace std;


bool cmp(int a, int b) {
    return a > b;
}
int main() {
    int a[15] = {0};
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }
    sort(a, a + 10, cmp);
    for (int i = 0; i < 3; i++) {
        cout << a[i] << endl;
    }
    return 0;
}
