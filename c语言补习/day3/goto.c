/*===============================================
 *   文件名称：goto.c
 *   创 建 者：     
 *   创建日期：2022年06月22日
 *   描    述：
 ================================================*/
#include <stdio.h>

int main(int argc, char *argv[])
{ 
    puts("111111111");
    puts("222222222");
    puts("333333333");
    goto xxx;
    puts("444444444");
    return 0;
xxx:
    puts("err");
} 
