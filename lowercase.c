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
    //Creating file pointers
    FILE *fp = NULL;
    FILE *fp1 = NULL;

    //Char variable
    char ch = ' ';

    fp = fopen(FILENAME, "r");

    if (fp == NULL)
        return -1;

    //Create a temp file
    fp1 = fopen("temp.txt", "w");

    if (fp1 == NULL)
        return -1;

    while ((ch = fgetc(fp)) != EOF)
    {
        if (islower(ch))
        {
            ch = ch-32;
        }

        fputc(ch, fp1);
    }

    fclose(fp);
    fclose(fp1);

    remove(FILENAME);

    //Rename temp file to Test.txt file
    rename("temp.txt", FILENAME);

    //Remove the temp file
    remove("temp.txt");

    //Open the file
    fp = fopen(FILENAME, "r");

    //Check if there is content in the file
    if (fp == NULL)
        return -1;

    //Print the content of the file on the screen
    while ((ch =fgetc(fp)) != EOF)
        printf("%c", ch);

    //Close the file and set the pointers to null
    fclose(fp);
    fp = NULL;
    fp1 = NULL;

    return 0;
}