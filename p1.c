/* WAP to count number of bits to be changed after the converting first number to second number using bitwise operator.
    Ex:     i/p:        n1 = 8, n2 = 7
                        binary for n1 = 00001000
                        binary for n2 = 00000111
                        for the given example if we convert n1 to n2 then 4 bits we need to change.
            0/p:    4
*/

#include<stdio.h>
int count_bit(int, int);
int main()
{
    int num1, num2, pos, count;

    printf("Enter the first number:\n");
    scanf("%d", &num1);

    printf("Enter the second number:\n");
    scanf("%d", &num2);

    printf("Binary of %d is ", num1);
    for(pos = 31; pos >= 0; pos--)
        printf("%d", num1 >> pos & 1);
    printf("\n");

    printf("Binary of %d is ", num2);
    for(pos = 31; pos >= 0; pos--)
        printf("%d", num2 >> pos & 1);
    printf("\n");

    count = count_bit(num1, num2);
    printf("No. of bits changed = %d\n", count);
}

int count_bit(int n1, int n2)
{
    int pos=31, count=0;

    while(pos>=0)
    if(((n1 >> pos) & 1) != ((n2 >> pos) & 1)) // comparing bits
    {
        count++;
        pos--;
    }
    else
    {
        pos--;
    }
    return count;
}