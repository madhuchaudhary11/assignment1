/* WAP to find pair in an array with largest product.
    Ex:     i/p: {1, 0, 3, 2, 4}
            o/p: 3*4 = 12
*/

#include<stdio.h>
int main()
{
    int arr[10], a, l, sl;

    printf("Enter the elements of an array:\n");
    for(a = 0; a < 10; a++)
        scanf("%d", &arr[a]);

    if(arr[0] > arr[1]) // initialize the array with large n second large number
    {
        l = arr[0];
        sl = arr[1];
    }
    else
    {
        l = arr[1];
        sl = arr[0];
    }
    for(a = 2; a < 10; a++)
    { // compare large n 2nd large number with another elements of the array
        if(l < arr[a])
        {
            sl = l;
            l = arr[a];
        }
        else if(sl < arr[a])
        {
            sl = arr[a];
        }
    }
    printf("%d * %d = %d\n", l, sl, l * sl);
    return 0;
}