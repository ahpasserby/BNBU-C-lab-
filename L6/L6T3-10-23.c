/*
=============================================
 Name: L6T3_2530026271.c
 Author: Sarzn
 Version: 
 Copyright: 
 Description: 
=============================================
*/

#include<stdio.h>

int main()
{
    printf("Please input grade and units for each course (6 courses): ");
    
    float sum_up = 0;
    int sum_down = 0;
    // Loop to read 6 courses and calculate GPA
    for(int i = 0; i < 6; i++)
    {
        char course = '0';
        int units = 0;
        float score = 0.0f;
        if(scanf(" %c %d",& course, &units) != 2)
        {
            printf("Warning! Invalid grade or unit.\n");
            return 0;
        }


        // Determine score based on grade
        if(course == 'A')
        {
            score = 4.0f;
        }
        else if (course == 'B')
        {
             score = 3.0f;
        }
        else if (course == 'C')
        {
             score = 2.0f;
        }
        else if (course == 'D')
        {
             score = 1.0f;
        }
        else if (course == 'F')
        {
             score = 0.0f;
        }
        else
        {
            printf("Warning! Invalid grade or unit.\n");
            return 0;
        }

        // Validate units
        if(units < 1 || units > 3)
        {
            printf("Warning! Invalid grade or unit.\n");
            return 0;
        }

        sum_up = sum_up + (score * units);
        sum_down = sum_down + units;
    }
    
    printf("The GPA for this semester is: %.2f\n", sum_up/sum_down);
    

    return 0;
}