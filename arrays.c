/*
 Author:Ioannis_Ch
 Date:12/06/2020
 Purpose:Training
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declare all variables
    int grades[10];
    int count = 10;
    long sum = 0;
    float average = 0.0f;

    //Display message for the user
    printf("\nEnter the 10 grades: \n");

    int i;
    for (i = 0; i < count; i++)
    {
        printf("%2u> ", i + 1);
        scanf("%d", &grades[i]); //import data from the user
        sum += grades[i];
    }
    average = (float)sum/count;

    printf("\nAverage of the class is: %.2f\n", average);
}