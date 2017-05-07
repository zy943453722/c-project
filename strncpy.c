/*************************************************************************
	> File Name: strncpy.c
	> Author: 
	> Mail: 
	> Created Time: 2017年05月06日 星期六 11时19分16秒
 ************************************************************************/

#include<stdio.h>//把前n个字符复制
char *strncpy(char *str1,const char *str2, int skip)
{
    char *p = str1;
    assert(str2 != NULL)
    while(skip-- && *str1++ = *str2++);//str2复制时到\0就停止了，若while（skip--）{*str1 = *str2}需要判断str2长度与skip的大小比较因为无法表征何时出现\0
    *str1 = '\0';
    return p;
}
