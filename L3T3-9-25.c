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
Put outputs and explanations here.
1. 10of100: 10% o f 100 is 10.000000
   Explanation: '1''0' read as integer 10, 'o' as ch1, 'f' as ch2, '1''0''0' as integer 100

2. 10 of100: 10%   o f 100 is 10.000000
   Explanation: '1''0' as 10, space as ch1, 'o' as ch2, 'f''1''0''0' fails to convert to integer

3. 10 of 100: 10%   o f 0 is 0.000000
   Explanation: '1''0' as 10, space as ch1, 'o' as ch2, 'f' fails integer conversion, x remains uninitialized
*/