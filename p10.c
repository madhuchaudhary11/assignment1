// WAP to implement user defined strcat() function using recursive function.

#include<stdio.h>
void my_strcat(char *, const char *);
int main()
{
    char first[20], second[20];

    printf("Enter the 1st string:\n");
    scanf(" %[^\n]", first);

    printf("Enter the 2nd string:\n");
    scanf(" %[^\n]", second);

    printf("Before concatenation, String: %s\n", first);
    my_strcat(first, second);
    printf("After concatenation, String: %s\n", first);
}
void my_strcat(char * first, const char * second)
{
    int f, s;

    for(f = 0; first[f]; f++);
    for(s = 0; second[s]; s++, f++)
    {
        first[f] = second[s];
    }
    first[f] = second[s];
}