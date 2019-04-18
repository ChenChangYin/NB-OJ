/*************************************************************************
	> File Name: 1002.c
	> Author: 
	> Mail: 
	> Created Time: 2019年03月01日 星期五 18时12分36秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main () {
	int n, i, len, len1, len2, a, b, y, t;
	char num1[1010], num2[1010], sum[1010];
	scanf("%d", &n);
	t = n;
	while (n--) {
		scanf("%s %s", num1, num2);
		memset(sum, 0, sizeof(sum));
		len1 = strlen(num1);
		len2 = strlen(num2);
        len = len1 > len2 ? len1 : len2;
		//开始计算
		for( y = 0, i = 0; i <= len; i++){
			if(len1 - 1 >= 0) a = num1[--len1] - '0'; else a = 0;
			if(len2 - 1 >= 0) b = num2[--len2] - '0'; else b = 0;
			sum[i] = (a + b + y) % 10 + '0';
			y = (a + b + y) / 10;
		}
		//输出结果
		printf("Case %d:\n%s + %s = ", t - n, num1, num2);
		if (sum[len] == '0') len--;
        for (i = len; i >= 0; i--) {
            printf("%c", sum[i]);
        }
        if (n == 0) {
            printf("\n");
        } else {
            printf("\n\n");
        }
    }
    return 0;
}
