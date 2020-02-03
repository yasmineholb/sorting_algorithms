#include "sort.h"
/**
 *bubble_sort - fn
 *@array: array
 *@size: array size
 */
void bubble_sort(int *array, size_t size)
{
size_t verif, i, test = 0;
verif = size;
if (!array || !size)
return;
while (verif > 0)
{
for (i = 0; i < size - 1; i++)
{
if (array[i] > array[i + 1])
{
test = array[i + 1];
array[i + 1] = array[i];
array[i] = test;
print_array(array, size);
}
}
verif--;
}
}

