/* WAP to print the following pattern.
    a
    B c
    D e F
    g H i J
    k L m N o
Note: Create generic code for pattern.
*/

#include<stdio.h>
int main()
{
    int rows, i, j;
    char ch;

    printf("Enter the number of rows:\n");
    scanf("%d", &rows);

    for(i = 0, ch = 'a'; i < rows; i++)
    {
        for(j = 0; j <= i; j++)
        {
            if(ch % 2)
                printf("%c ", ch++);
            else
            {
                printf("%c ", ch-32);
                ch++;
            }
        }
        printf("\n");
    }
}