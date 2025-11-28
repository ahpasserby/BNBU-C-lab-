/*
=============================================
 Name: L10T.c
 Author: Sarzn
 Version:
 Copyright: 
 Description: 
 ============================================= 
 */
#include <stdio.h>


int main()
{
	char str[51];
	int count = 0;
	int i = 0;
	printf("Input a string: ");
    //input
	fgets(str, sizeof(str), stdin);

    //calc how many a
	while (str[i] != '\0') 
	{
		if (str[i] == 'a') 
		{
			 count++;  
		} 
		i++;  
	}

    //output
	printf("There totally %d 'a' in %s", count, str);  
	 
	return 0;  

}