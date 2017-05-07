/*************************************************************************
	> File Name: strcmp.c
	> Author: 
	> Mail: 
	> Created Time: 2017年05月06日 星期六 09时49分42秒
 ************************************************************************/

#include<stdio.h>
#include<assert.h>
int strcmp(const char *str1,const char *str2)
{
    assert(str1 != NULL && str2 != NULL);
    while(*str1 && *str2 && *str1 == *str2)//防止走完
    {
       ++str1;
       ++str2;
    }
    return *str2 - *str1;
}
int strcmp(const char *str1,const char *str2)
{
     assert(str1 != NULL && str2 != NULL);
     int ret = 0;
    while(!(ret = *str1 - *str2) && *str2)//若str1 == str2 为0 ，但要进入while则取非,因为进循环str1一直 = str2，所以只判断一个不为\0就好
    {
        str1++;
        str2++;
    }
    return ret = 0 ? 0 : ret;
}
