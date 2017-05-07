/*************************************************************************
	> File Name: strcpy.c
	> Author: 
	> Mail: 
	> Created Time: 2017年05月06日 星期六 11时03分27秒
 ************************************************************************/

#include<stdio.h>
char* strcpy(char *str1,const char *str2)
{
    char *p = str1;
    assert(str2 != NULL);//str1可以为NULL
    while(*str2 && *str1++ = *str2++);//若先判断str2 是否等于\0,则需要加\0赋值给*str，否则不需
    *str1 = '\0';
    //while(*str1++ = *str2++);
    return p;
}
