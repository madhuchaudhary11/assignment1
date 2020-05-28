/* WAP to reverse elements which are prime number from given array.
    Ex:     i/p = {10, 13, 20, 17, 24}
            o/p = {10, 31, 20, 71, 24}
            Here in given example 13 and 17 are prime numbers so after reversing elements are 31 and 71.
*/

#include<stdio.h>
int main()
{
    int arr[10], a, i, j, temp = 0, reverse;

    printf("Enter the elements of an array:\n");
    for(a = 0; a < 10; a++)
        scanf("%d",&arr[a]);

    for(a = 0; a < 10; a++)
    { // to check for the prime number
        for(i = 2; i < arr[a]; i++)
            if((arr[a] % i) == 0)
                break;

        if(arr[a] == i)
        { // to reverse the digit of the prime number
            for(j = arr[a], reverse = 0; j; j = j/10)
            {
                temp = j % 10;
                reverse = (reverse * 10) + temp;
                arr[a] = reverse;
            }
        }
    }
    for(a = 0; a < 10; a++)
        printf("%d ", arr[a]);
    printf("\n");
}