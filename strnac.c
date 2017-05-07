/*************************************************************************
	> File Name: strnac.c
	> Author: 
	> Mail: 
	> Created Time: 2017年05月06日 星期六 10时52分10秒
 ************************************************************************/

#include<stdio.h>
char* strncat(char *str1, char *str2, int skip)
{
    char *p = str1;
    assert(str1 != NULL && str2 != NULL);
    while(*str1)
    {
        ++str1;
    }
    while(skip-- && *str1++ = *str2++);//skip为0了就不能再走了
    *str1 = '\0';//若结束则给str1附上\0，相当于给str1加上结束符
    return p;
}
