// WAP to check if a given string is a Palindrome or not.

#include<stdio.h>
int main()
{
    char str[10], ch;
    int a, b, flag=0;

    printf("Enter the string:\n");
    scanf("%s", str);

    for(a = 0; str[a]; a++);
    for(a = (a-1), b = 0; a > b; a--, b++)  // logic for checking the palindrome string
    {
        if(str[a] == str[b])
        {
            flag = 1;
        }
        else
            flag = 0;
    }
    if(flag == 1)
        printf("%s is a Palindrome string.\n", str);
    else
        printf("%s is not a Palindrome string.\n", str);
}