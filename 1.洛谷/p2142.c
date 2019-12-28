/*************************************************************************
	> File Name: p2142.c
	> Author: 
	> Mail: 
	> Created Time: 2019年03月22日 星期五 17时48分06秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    int ans1[10010] = {0}, ans2[10010] = {0}, ans[10010] = {0};
    char num1[10010], num2[10020], num[10010];
    int len1, len2, len = 0;
    scanf("%s %s", num1, num2);
    len1 = strlen(num1);
    len2 = strlen(num2);
    if (len1 < len2 || (len1 == len2 && strcmp(num1,num2) < 0)) {
        printf("-");
        strcpy(num, num2);
        strcpy(num2, num1);
        strcpy(num1, num);
    }

    for (int i = 0; i < len1; i++) {
        ans1[len1 - i] = num1[i] - '0';
    }
    for (int i = 0; i < len2; i++) {
        ans2[len2 - i] = num2[i] - '0';
    }
    int i = 1;
    while(i <= len1 || i <= len2) {
        if (ans1[len1] == 0) len1--;
        if (ans1[i] < ans2[i]) {
            ans1[i + 1]--;
            ans1[i] == 10;
        }
        ans[i] = ans1[i] - ans2[i];
        i++;
        len++;
    }
    int temp = 0;
    for (int i = len; i >= 1; i--) {
        if (ans[i] == 0 && temp == 0) continue;
        else temp = 1;
        printf("%d", ans[i]);
    }
    printf("\n");
    return 0;
}
