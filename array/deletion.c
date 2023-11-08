#include <stdio.h>

void printme(int arr[], int size)
{
    int i;

    for (i = 0; i < size; i++)
        printf("DIV[%d] = %d\n", i, arr[i]);
}
/*
implementations of the deletion operation in an array
Deletes the second element in the array
*/

int main()
{
    int DIV[] = {1,34,13};
    int n = 3;
    int i;

    printf("Original elements are: \n");
    printme(DIV, n);

    printf("The array elements after deletion :\n");
    for(i = 1; i < n; i++)
        DIV[i] = DIV[i+1];
        n = n - 1;

    printme(DIV, n);

    return (0);
}