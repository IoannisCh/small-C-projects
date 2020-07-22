/*
 Author:Ioannis_Ch
 Date:22/07/2020
 Purpose:Training
 */

#include <stdio.h>
#include <stdlib.h>

//Defining the constant that we are working with
#define FILENAME "Test.txt"

int main()
{
    //Creating file pointer
    FILE *fp = NULL;
    //Char variable and line counting
    char ch;
    int linesCount = 0;

    //Here we open the file in read only mode
    fp = fopen(FILENAME, "r");

    //Checking if the file exists
    if(fp == NULL)
    {
        printf("File does not exist\n");
        return -1;
    }

    //Read each character with a loop
    while((ch=fgetc(fp))!= EOF)
    {
        if(ch=='\n')
            linesCount++;
    }

    //Closing the file and set the pointer to null
    fclose(fp);
    fp = NULL;

    //Print the result to the screen
    printf("Total number of lines are: %d\n", ++linesCount);

    return 0;
}