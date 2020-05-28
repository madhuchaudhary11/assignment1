/* WAP to find common element in three sorted array.
Ex:     a1 = {1, 5, 10, 20, 40, 80}
        a2 = {6, 7, 20, 80, 100}
        a3 = {3, 4, 15, 20, 30, 70, 80, 120}
        o/p:    20, 80
*/

#include<stdio.h>
int main()
{
 /*       int arr1[] = {1, 5 , 10, 20, 40, 80};
        int arr2[] = {6,  7, 20, 80, 100};
        int arr3[] = {3, 4, 15, 20, 30, 70, 80, 120};*/

        int i = 0 ,  j = 0 , k = 0, ele1, ele2, ele3; // i, j and k are pointing at the starting of each array.

        int  arr1[10], arr2[10], arr3[10], a, b, c;
        printf("Enter the elements of first array:\n");
        for(a = 0; a < 10; a++)
        {
                scanf("%d", &arr1[a]);
        }

        printf("Enter the elements of second array:\n");
        for(a = 0; a < 10; a++)
        {
                scanf("%d", &arr2[a]);
        }

        printf("Enter the elements of third array:\n");
        for(a = 0; a < 10; a++)
        {
                scanf("%d", &arr3[a]);
        }

        ele1 = sizeof(arr1)/sizeof(arr1[0]);
        ele2 = sizeof(arr2)/sizeof(arr2[0]);
        ele3 = sizeof(arr3)/sizeof(arr3[0]);

        while((i < ele1) & (j < ele2) & (k < ele3))
        {
                if((arr1[i] == arr2[j]) & (arr3[k] == arr1[i])) //if all elements are same then
                {
                        printf("%d ", arr1[i]);
                        i++;
                        j++;
                        k++;
                }
                //increase the array index variable of those which are small
                else if(arr1[i] < arr2[j])
                {
                        i++;
                }
                else if(arr2[j] < arr3[k])
                {
                        j++;
                }
                else
                        k++;
        }
        printf("\n");
        return 0;
}