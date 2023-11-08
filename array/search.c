#include <stdio.h>

/*
Implementations of the search operation
Consider DIV is a linear array with N elements and K
is a positive integer such that K<=N. Following is
the algorithm to find an element with a value of ITEM
using sequential search.
*/

int main()
{
    int DIV[] = {1, 3, 6, 8, 12};
    int item = 8, n = 5, i = 0;

    printf("Original array elements are: \n");
    for (i = 0; i < n; i++)
        printf("DIV[%d] = %d\n", i, DIV[i]);
    
    printf("\nSearching for item ..\n\n");
    for (i = 0; i < n; i++)
    {
        if (DIV[i] == item){
            printf("Found item : %d at position %d\n", item, i);
            break;
        }
        if (i == n-1)
            printf("Could not find item\n");
    }
    return (0);
}