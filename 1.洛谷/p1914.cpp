/*************************************************************************
	> File Name: p1914.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年11月18日 星期日 16时28分26秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main() {
    int n;
    char key[50];
    cin >> n;
    cin >> key;
    for (int i = 0; i < strlen(key); i++) {
        key[i] = (key[i] + n - 97) % 26 + 97;
    }
    puts(key);
    return 0;
}

