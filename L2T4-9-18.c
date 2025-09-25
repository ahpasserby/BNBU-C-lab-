/*
=============================================
 Name: L2T4v530026271.c
 Author: Sarzn
 Version: 1.0
 Copyright: NONE
 Description: NONE
=============================================
*/

#include <stdio.h>

int main() {
    char ch;
    // 提示用户输入字符
    printf("Read a character from keyboard: ");
    ch = getchar();  // 从键盘读取一个字符
    // 输出读取的字符
    printf("Output the character: ");
    putchar(ch);     // 输出字符到屏幕
    printf("\n");    // 换行
    
    return 0;
}