/*
=============================================
 Name: L2T2v530026271.c
 Author: Sarzn
 Version: 1.0
 Copyright: NONE
 Description: 实验一下short int溢出
=============================================
*/

#include <stdio.h>
int main (){
    short int x, y, z;
    x = 32767;  // short int类型的最大值
    y = 3;      // 加的数
    z = x + y;  // 加起来，然后就溢出了。。。
    printf("%d + %d = %d\n", x, y, x + y); // 直接打印x+y
    printf("%d + %d = %d\n", x, y, z); // 打印存储在z中的值
    return 0;
}

/* 
解释：
两个输出不同的原因是发生了整数溢出。
short int类型通常的范围是-32768到32767。
在计算32767 + 3时，得到32770，这超过了最大值。
在第一个printf中，表达式x+y被计算为int类型（由于整数提升），
因此产生正确的结果32770。
在第二个printf中，z是一个short int类型，存储的是溢出后的值
（在二进制补码表示中，32767 + 3 = -32766），因此显示错误的结果。
呃呃呃
*/