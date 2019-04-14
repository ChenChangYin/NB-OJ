/*************************************************************************
	> File Name: p2089.c
	> Author: 
	> Mail: 
	> Created Time: 2019年03月16日 星期六 19时16分14秒
 ************************************************************************/
#include <stdlib.h>
#include <stdio.h>
int n, kind = 0, m1[10000][10], m2[10];
void peiliao(int total,int a) {
    if (a == 10){
        if (total == n) {
            for (int j = 0; j < 10; j++) m1[kind][j] = m2[j];//符合要求存起来~~ 
            kind++;
        }
    }
    else if (total >= n) ;//小小优化一下 
    else
      for (int i = 1; i <= 3; i++){
          m2[a] = i;
          peiliao(total + i, a + 1);//其实这和十连for没什么区别。。。 
      }
}
int main(){
    scanf("%d", &n);
    peiliao(0, 0);
	printf("%d\n", kind);
    for (int j=0;j<kind;j++){
		for (int i=0;i<10;i++) {
		printf("%d ", m1[j][i]);
		}
	printf("\n");
    }
    return 0;
}
