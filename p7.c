/* WAP to check if two given string is anagram of each other or not.
    Ex:     a1 = "Army"
            a2 = "Mary"
    o/p:    anagram string
    An anagram contains same length and same characters, but ina different order.
*/

#include<stdio.h>
#include<string.h>
void converttoLowercase(char *);
int main()
{
    char str1[20], str2[20], temp;
    int i, j, len1, len2, flag = 0;

    printf("Enter the 1st string:\n");
    scanf(" %[^\n]", str1);

    printf("Enter the 2nd string:\n");
    scanf(" %[^\n]", str2);

    for(i = 0; str1[i]; i++);
    len1 = i;

    for(i = 0; str2[i]; i++);
    len2 = i;

    if(len1 != len2) // compare the length of both string.
    {
        flag = 1;
    }
    else
    {   // function call for converting the letter into lower case
        converttoLowercase(str1);
        converttoLowercase(str2);
    }

    for(i = 0; i < len1; i++)   // sorting of the character of the strings.
    {
        for(j = i+1; j < len1; j++)
        {
            if(str1[i] > str1[j])
            {
                temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
            }
            if(str2[i] > str2[j])
            {
                temp = str2[i];
                str2[i] = str2[j];
                str2[j] = temp;
            }
        }
    }
    for(i = 0; i < len1; i++)   // compararing the string character by character
    {
        if(str1[i] != str2[i])
        {
            flag = 1;
        }
    }
    if(flag == 1)
        printf("Strings are not anagram.\n");
    else
        printf("Strings are anagram.\n");
}
void converttoLowercase(char arr[]) // function to convert the upper case into lower case
{
    int a, len;
    for(a = 0; arr[a]; a++);
    len = a;
    for(a = 0; a < len; a++)
    {
        if((arr[a] >= 'A') && (arr[a] <= 'Z'))
            arr[a] = arr[a]+32;
    }
}