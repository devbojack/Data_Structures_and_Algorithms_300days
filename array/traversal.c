#include <stdio.h>

/*
Implementations of the traversal operation
Algorithm to traverse through all the elements present in a Linear Array
*/
int main()
{
    int DIV[] = {1,2,3,5,6,8,42,23};
    int i, n = 8;

    printf("The original array elements: \n");
    for (i = 0; i < n; i++)
        printf("DIV[%d] = %d, \n", i, DIV[i]);

    return (0);
}