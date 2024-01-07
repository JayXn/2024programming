/*======https://www.dotcpp.com/course/561======*/

// 函数名：putenv
// 头文件：<stdlib.h>
// 函数原型：void *putenv(char *name);
// 功能：用于改变或增加环境变量的内容
// 参数：char *name 为环境变量名
// 返回值：成功返回0，失败返回-1

// 程序例：使用putenv函数将环境变量拼接为字符串，然后将其替换原来的环境变量
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char *path, *ptr;
    int i = 0;

    ptr = getenv("PATH");

    path = malloc(strlen(ptr) + 15);
    strcpy(path, "PATH=");
    strcat(path, ptr);
    strcat(path, ";c:\\temp");  // Add c:\\temp to the PATH

    putenv(path);

    while (environ[i]) {
        printf("%s\n", environ[i++]);
    }

    return 0;
}

