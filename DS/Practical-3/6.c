/*
Write a program to Rearrange array such that even index elements are smaller
and odd index elements are greater.
Input : arr[] = {2, 3, 4, 5}
Output : arr[] = {2, 4, 3, 5} or arr[] = {3, 4, 2, 5}
– A simple solution is to sort the array in decreasing order, then starting from
the second element, swap the adjacent elements.
– An efficient solution is to iterate over the array and swap the elements as per
the given condition.
At any point of time if i is even and arr[i] > arr[i+1], then we swap arr[i] and arr[i+1].
Similarly, if i is odd and arr[i] < arr[i+1], then we swap arr[i] and arr[i+1].

*/

#include <stdio.h>

void rearrangeArray(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (i % 2 == 0 && arr[i] > arr[i + 1])
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
        else if (i % 2 != 0 && arr[i] < arr[i + 1])
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}

int main()
{
    int arr[] = {2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    rearrangeArray(arr, n);

    printf("Rearranged array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}