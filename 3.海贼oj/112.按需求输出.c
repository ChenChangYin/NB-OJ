/*************************************************************************
	> File Name: 112.按需求输出.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月07日 星期五 19时34分10秒
 ************************************************************************/

#include<stdio.h>

int main() {
    char x;
    scanf("%c", &x);
    switch(x) {
        case 'a': printf("It is good\n"); break;
        case 'b': printf("OMG\n"); break;
        case 'c': printf("Yes!\n"); break;
    }
    return 0;
}
