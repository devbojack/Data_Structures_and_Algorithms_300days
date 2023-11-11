#include <stdio.h>
#include <stdlib.h>
/**
 * Start
 * Print all the elements in the Array
 * Stop
*/

int main()
{
    int DIV[] = {1, 2, 34, 56, 78,97};
    int i;

     printf("Elements in DIV\n");
    for (i = 0; i < 6; i++)
    {
        printf("DIV[%d] : %d\n", i, DIV[i]);
    }
    return (0);
}