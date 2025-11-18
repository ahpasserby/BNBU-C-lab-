/*
=============================================
 Name: L8T1v530026271.c
 Author: Sarzn
 Version: 1.0
 Copyright: none
 Description: Calculate square root, log10 and natural log of a positive integer
 =============================================
*/
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    
    // 输入一个正整数
    printf("Input a positive integer: ");
    scanf("%d", &n);
    
    // 检查输入是否为正整数
    if (n <= 0) {
        printf("Warning! You should input a positive integer!\n");
    } else {
        // 计算平方根
        double sqrt_result = sqrt(n);
        // 计算以10为底的对数
        double log10_result = log10(n);
        // 计算自然对数
        double log_result = log(n);
        
        // 输出结果
        printf("The square root of %d = %lf\n", n, sqrt_result);
        printf("The Log10 of %d = %lf\n", n, log10_result);
        printf("The natural log of %d = %lf\n", n, log_result);
    }
    
    return 0;
}
