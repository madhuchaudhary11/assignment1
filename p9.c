/* WAP to check if given number is Armstrong or not using recursive function.
    Note: Use this prototype:- int my_fun(int*);
*/

#include<stdio.h>
int my_fun(int *);

int main()
{
    int num;

    printf("Enter the number:\n");
    scanf(" %d", &num);
    my_fun(&num);
}

int my_fun(int *p)
{
    int num = *p, num1, sum, rem, rem1, c, count;

    for(num1 = num, count = 0; num1; num1 = num1/10)
    { // count the digits of the number
        count++;
    }

    for(num1 = num, sum = 0; num1; num1 = num1/10)  // logic to check the armstrong number
    {
        rem = num1 % 10;
        for(c = count, rem1 = 1; c > 0; c--)
        {
            rem1 *= rem;
        }
        sum = sum + rem1;
    }
    if(sum == num)
        printf("%d is an Armstrong number.\n", sum);
    else
        printf("%d is not an Armstrong number.\n", num);
}