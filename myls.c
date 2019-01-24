/*************************************************************************
	> File Name: myls.c
	> Author: 陈常寅
	> Mail: 1303501514@qq.com
	> Created Time: 2019年01月22日 星期二 19时54分59秒
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <dirent.h>
#include <signal.h>
#include <sys/stat.h>
#include <pwd.h>
#define MAX_LEN 50

char arr[MAX_LEN] = {0};
void printprompt();

int main(int argc, char **argv) {
    printprompt();
    while (scanf("%[^\n]s", arr) != EOF) {
        getchar();
        signal(SIGINT, SIG_IGN);
        if (!strcmp(arr, "exit")) return 0;
        system(arr);
        printprompt();
    }    
    return 0;
}

void printprompt(){
    char hostname[MAX_LEN];
    char pathname[MAX_LEN];
    struct passwd *pwd;
    pwd = getpwuid(getuid());//通过pid获取用户信息
    gethostname(hostname, MAX_LEN);//取得hostname
    getcwd(pathname, MAX_LEN);//获取绝度路径把它储存到第一个参数pathname[]
    printf("\e[1;32m%s@%s\e[0m:", pwd->pw_name, hostname);
    if (strncmp(pathname, pwd->pw_dir, strlen(pwd->pw_dir))==0){//比较两条路径
        printf("\e[1;34m~%s\e[0m$", pathname+strlen(pwd->pw_dir));//打印路径
    } else {
        printf("%s",pathname);//打印当前工作路径
        }
}
