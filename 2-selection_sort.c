#include "sort.h"
/**
 *selection_sort - fn
 *@array: array
 *@size: size of array
 */
void selection_sort(int *array, size_t size)
{
int temp;
size_t i, j;
for (i = 0; i < size; i++)
{
for (j = i + 1; j < size; j++)
{
if (array[i] > array[j])
{
temp = array[i];
array[i] = array[j];
array[j] = temp;
}
}
print_array(array, size);
}
}
