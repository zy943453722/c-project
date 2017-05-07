/*************************************************************************
	> File Name: strlen.c
	> Author: 
	> Mail: 
	> Created Time: 2017年05月06日 星期六 09时33分15秒
 ************************************************************************/

#include<stdio.h>//strlen的源码
#include<assert.h>
unsigned int strlen(const char *str)
{
    assert(str != NULL);//查看是否为空
    unsigned int len;
    while(*str++ != '\0')
    {
        len++;
    }
    return len;
}
//第二种
int strlen(const char* str)
{
    const char *p = str;
    while(*p++);
    return ((int)(p - str - 1));
}
