/*
=============================================
 Name: L3T3v530026271.c
 Author: Sarzn
 Version: 
 Copyright: 
 Description: 
=============================================
*/
#include <stdio.h>
int main() {
    int percentage, x;
    char ch1, ch2;
    scanf("%d%c%c%d", &percentage, &ch1, &ch2, &x);
    printf("%d%% %c%c %d is %f\n", percentage, ch1, ch2, x, 1.0*x*percentage/100); 
    return 0;
}

/* 
输出结果和解释：

1. 输入：10of100
   输出：10% of 100 is 10.000000
   
   printf对应关系：
   %d%% → 10%
   %c    → o
   %c    → f  
   %d    → 100
   %f    → 10.000000
   
   变量赋值：
   int percentage ← 10
   char ch1 ← 'o'
   char ch2 ← 'f'
   int x ← 100

2. 输入：10 of100
   输出：10%  o 0 is 0.000000
   
   printf对应关系：
   %d%% → 10%
   %c    → 空格
   %c    → o
   %d    → 0（垃圾值）
   %f    → 0.000000
   
   变量赋值：
   int percentage ← 10
   char ch1 ← ' '（空格）
   char ch2 ← 'o'
   int x ← 垃圾值（未成功读取）

3. 输入：10 of 100
   输出：10%  o 0 is 0.000000
   
   printf对应关系：
   %d%% → 10%
   %c    → 空格
   %c    → o
   %d    → 0（垃圾值）
   %f    → 0.000000
   
   变量赋值：
   int percentage ← 10
   char ch1 ← ' '（空格）
   char ch2 ← 'o'
   int x ← 垃圾值（未成功读取）
*/
