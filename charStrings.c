/*Author: Ioannis_Ch
  Date:25/06/2020
  Purpose: Training
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Declaration
int stringLength(const char string[]);
void concat(char result[], const char str[], const char str1[]);
bool equalStrings(const char s1[], const char s2[]);

int main()
{
    const char word1[] = "ioannis";
    const char word2[] = "the";
    const char word3[] = "best";
    char result[50];

    printf("%d  %d  %d\n", stringLength(word1), stringLength(word2), stringLength(word3));

    concat(result, word1, word2);

    printf("\n%s", result);

    printf("\n%d\n", equalStrings("Ioannis", "Ioannis"));
    printf("%d\n", equalStrings("Ioanni", "Ioannis"));

    return 0;
}

//function Implimantation
int stringLength(const char string[])
{
    int count = 0;

    while (string[count] != '\0')
        ++count;

    return count;
}

//function Implimantation
void concat(char result[], const char str1[], const char str2[])
{
    int i, j;

    for (i = 0; str1[i] != '\0'; ++i)
    {
        result[i] = str1[i];
    }

     for ( j = 0;  str2[j] != '\0';  ++j )
        result[i + j] = str2[j];

    result[i+j] = '\0';
}
//function Implimantation
bool equalStrings(const char s1[], const char s2[])
{
    int i = 0;
    bool isEquals = false;

    while ( s1[i] == s2 [i]  &&
            s1[i] != '\0' &&
            s2[i] != '\0' )
        ++i;

    if ( s1[i] == '\0'  &&  s2[i] == '\0' )
       isEquals = true;
    else
       isEquals = false;

    return isEquals;
}
