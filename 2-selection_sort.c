#include "sort.h"
/**
 *selection_sort - fn
 *@array: array
 *@size: size of array
 */
void selection_sort(int *array, size_t size)
{
int temp;
size_t i, j, m;
if (!array || !size)
return;
for (i = 0; i < size; i++)
{
m = i;
for (j = i + 1; j < size; j++)
if (array[m] > array[j])
m = j;
if (i != m)
{
temp = array[i];
array[i] = array[m];
array[m] = temp;
print_array(array, size);
}
}
}
