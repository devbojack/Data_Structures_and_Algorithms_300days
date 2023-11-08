#include <stdio.h>

/*
Implementations of the update operation
Consider DIV is a linear array with N elements 
and K is a positive integer such that K<=N. Following
is the algorithm to update an element available at the
Kth position of LA.
*/

void printme(int arr[], int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("DIV[%d] = %d\n", i, arr[i]);
    }
}

int main()
{
    int DIV[] = {22, 21, 23, 32, 5, 14, 27, 29, 30};
    int i, n = 9, k = 5, item = 100;
    printf("The original array elements are: \n");
    printme(DIV, n);
    
    if (k <= n)
    {
        printf("Updating DIV ....\n");
        DIV[k] = item;
        printf("The array elements after update are: \n");
        printme(DIV, n);
    }
    else {
        printf("Cannot update the specified range index\n");
    }

    return (0);
}