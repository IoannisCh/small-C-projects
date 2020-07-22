/*
 Author:Ioannis_Ch
 Date:22/07/2020
 Purpose:Training
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//Defining the constant that we are working with
#define FILENAME "Test.txt"

int main()
{
    //Creating file pointers
    FILE *fp = NULL;
    //Init variables
    int cnt = 0;
    int i = 0;

    fp = fopen(FILENAME, "r");

    if (fp == NULL)
        return -1;

    //Moves the file pointer to the end of the file
    fseek(fp, 0, SEEK_END);

    //Get the position of the file pointer
    cnt = ftell(fp);

    while (i < cnt)
    {
        i++;
        fseek(fp, -i, SEEK_END);
        printf("%c", fgetc(fp));
    }

    printf("\n");
    fclose(fp);
    fp = NULL;

    return 0;
}