/*
=============================================
 Name: L8T2v530026271.c
 Author: Sarzn
 Version: 1.0
 Copyright: none
 Description: Calculate ASCII difference between two characters
 =============================================
*/
#include <stdio.h>

// 函数声明
int differenceASCIICode(char c1, char c2);

int main() {
    char char1, char2;
    
    // 输入两个字符
    printf("Please enter two characters: ");
    scanf(" %c %c", &char1, &char2);
    
    // 调用函数计算ASCII码差值
    int diff = differenceASCIICode(char1, char2);
    
    // 输出结果
    printf("The difference between character '%c' and '%c' is %d.\n", char1, char2, diff);
    
    return 0;
}

// 计算两个字符ASCII码的差值
int differenceASCIICode(char c1, char c2) {
    // 返回第一个字符减去第二个字符的ASCII码差值
    return c1 - c2;
}
