/*
=============================================
 Name: L4T3_v530026271.c
 Author: Sarzn
 Version: 
 Copyright: 
 Description: 
=============================================
*/


#include <stdio.h>

int main(){
    int x = 50, y = 25;
    int temp1, temp2;
    
    temp1 = x/++y;
    printf("temp1= %d\ty= %d\n", temp1, y);
    
    y=25;
    temp2 = x/y++;
    printf("temp2= %7d\ty= %d\n", temp2, y);
    
    y=25;
    temp2 = x/y++;
    printf("temp2= %-7d\ty= %d\n", temp2, y);
    
    return 0;
}

/* 
Output of
(1)	%7d: 
temp1= 2	y= 26
temp2=       2	y= 26
temp2= 2     	y= 26

(2)	%-7d:
temp1= 2	y= 26
temp2=       2	y= 26
temp2= 2     	y= 26

Explanation: 
(1)	difference between temp1 and temp2:
    temp1使用前缀递增++y，y先增加到26再参与除法运算(50/26=1.92取整为2)
    temp2使用后缀递增y++，y先以25参与除法运算(50/25=2)后再增加到26
    
(2)	difference between %7d and %-7d:
    %7d表示输出整数，宽度为7字符，右对齐
    %-7d表示输出整数，宽度为7字符，左对齐
*/