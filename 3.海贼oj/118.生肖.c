/*************************************************************************
	> File Name: 118.生肖.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月07日 星期五 20时12分17秒
 ************************************************************************/

#include<stdio.h>

int main() {
    int year, a;
    scanf("%d", &year);
    a = (year - 1900) % 12;
    if (a < 0) a += 12;
    switch(a) {
        case 0: printf("rat\n"); break;
        case 1: printf("ox\n"); break;
        case 2: printf("tiger\n"); break;
        case 3: printf("rabbit\n"); break;
        case 4: printf("dragon\n"); break;
        case 5: printf("snake\n"); break;
        case 6: printf("horse\n"); break;
        case 7: printf("sheep\n"); break;
        case 8: printf("monkey\n"); break;
        case 9: printf("rooster\n"); break;
        case 10: printf("dog\n"); break;
        case 11: printf("pig\n"); break;
    }
    return 0;
}
