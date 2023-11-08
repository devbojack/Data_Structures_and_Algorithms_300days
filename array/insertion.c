#include <stdio.h>

/*Implementation of insertion operation, where we add data at the end of the array*/
int main()
{
    int nums[3] = {}, i;

    printf("Array before insertion: \n");
    for (i = 0; i < 3; i++)
        printf("Nums[%d] = %d\n", i, nums[i]);
    
    printf("Inserting elements.. \n");
    printf("The array elements after insertion :\n");

    for (i = 0; i< 3; i++)
    {
        nums[i] = i * 444;
        printf("Nums[%d] = %d\n", i, nums[i]);
    }

    return (0);
}