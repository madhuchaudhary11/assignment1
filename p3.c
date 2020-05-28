/* WAP to search digit and it's position from left side which is perfect number for given integer number.
    Ex: i/p: n = 4762591
        o/p: from left side 3rd digit is the perfect number which is 6.
*/

#include<stdio.h>
int main()
{
    int num, num1, i, j, reverse, rem, rem1, sum, count, count1, lastdigit;
    char ch1[] = "st", ch2[] = "nd", ch3[] = "rd", ch4[] = "th", ch[2];
    printf("Enter the number:\n");
    scanf("%d", &num);

    for(reverse = 0, num1 = num; num1; num1 = num1/10) //for reverse the number
    {
        rem = num1 % 10;
        reverse = reverse * 10 + rem;
    }
    for(num1 = reverse, count = 1; num1; num1 = num1/10, count++) // to check for the perfect number
    {
        rem1 = num1 % 10;
        for(j = 1, sum = 0; j < rem1; j++)
        {
            if((rem1 % j) == 0)
            {
                sum = sum + j;
            }
        }
        for(count1 = count; count1; count1 = count1/10)
        {// for adding the postfix as 'st', 'nd', 'rd' & 'th' at the end of the position
            lastdigit = count1 % 10;
            if(lastdigit == 1)
            {
                for(i=0; ch1[i]; i++)
                    ch[i] = ch1[i]; // copying the string from source to destination
                ch[i] = ch1[i]; // copy the \0 at the destination
            }
            else if(lastdigit == 2)
            {
                for(i=0; ch2[i]; i++)
                    ch[i] = ch2[i];
                ch[i] = ch2[i];
            }
            else if(lastdigit == 3)
            {
                for(i=0; ch3[i]; i++)
                    ch[i] = ch3[i];
                ch[i] = ch3[i];
            }
            else
            {
                for(i=0; ch4[i]; i++)
                    ch[i] = ch4[i];
                ch[i] = ch4[i];
            }
        }
        if(sum == rem1)
            printf("From the left side %d%s digit is the perfect number which is %d\n", count, ch, sum);
    }
    return 0;
}