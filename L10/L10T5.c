/*
=============================================
 Name: L10T5.c
 Author: Sarzn
 Version:
 Copyright: 
 Description: 
 ============================================= 
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char word[21];  // 存储单个单词（长度<20）
    int count = 0;  // 统计单词数

    printf("Please input some words: ");

    // 循环读取单词，直到EOF或遇到"End"
    while (scanf("%s", word) != EOF) {
        if (strcmp(word, "End") == 0) {
            break;  // 遇到End，停止统计
        }
        count++;  // 否则计数加1
    }

    printf("There are totally %d words.\n", count);

    return 0;
}