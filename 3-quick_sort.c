#include "sort.h"
/**
 *quick_sort - fn
 *@array: array
 *@size: array size
 */

void quick_sort(int *array, size_t size)
{
if (!array || !size)
return;
sortone(array, 0, size - 1, size);
}

/**
 *sortone - fn
 *@array: array
 *@f: first element
 *@fn: last element
 *@size: size of array
 */

void sortone(int *array, size_t f, size_t fn, size_t size)
{
size_t k;
if (fn == 0 || fn <= f)
return;
k = divide(array, f, fn, size);
if (k != 0 && k > f)
sortone(array, f, k - 1, size);
if (k < size - 1)
sortone(array, k + 1, fn, size);
}
/**
 *divide - fn
 *@array: array
 *@f: first element
 *@fn: last element
 *@size: size of array
 *Return: size_t
 */

size_t divide(int *array, size_t f, size_t fn, size_t size)
{
int tmp, p;
size_t test;
for (test = f; test < fn; test++)
{
if (array[test] < array[fn])
{
if (test != f)
{
p = array[f];
array[f] =  array[test];
array[test] = p;
print_array(array, size);
}
f++;
}
}
if (array[f] > array[fn])
{
tmp = array[f];
array[f] = array[fn];
array[fn] = tmp;
fn = f;
print_array(array, size);
}
return (fn);
}


