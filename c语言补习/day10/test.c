/*===============================================
*   文件名称：test.c
*   创 建 者：     
*   创建日期：2022年07月01日
*   描    述：
================================================*/
#include <stdio.h>

int main(int argc, char *argv[])
{ 
    float a = 8.5;
    int *p = (int *)&a;
    printf("%d\n", *p);
    return 0;
} 
