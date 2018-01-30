#pragma once
#include <stdio.h>
/*指针笔记
int year 和 int *ptr_year是两个东西
ptr_year=&year    把year的地址赋给了ptr_year    说：右边的指针变量指向了左边的变量！！！！！！
当地址碰到符号 * 时是找到地址这个地方的值！！！本身的ptr_year是一个地址！！！不是数值！！！！！！！

*/

/*
使用指针交换变量值
*/
void swap(int *num1,int *num2);
/*
使用数组指针循环输出数组值
*/
void Loop_Array(int *array,int length);

