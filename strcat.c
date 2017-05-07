/*************************************************************************
	> File Name: strcat.c
	> Author: 
	> Mail: 
	> Created Time: 2017年05月06日 星期六 10时16分41秒
 ************************************************************************/
#include<stdio.h>
#include<assert.h>
void Strcat(char *str1,const char *str2)//str1可以变
{
    assert(str1 != NULL && str2 != NULL);
    while(*str1++ != '\0');//让str1走到末尾
    while(*str1++ = *str2++ && *str2);
}

