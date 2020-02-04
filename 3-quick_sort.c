#include "sort.h"
/**
 *
 *
 */

void quick_sort(int *array, size_t size)
{
if (!array || !size)
return;
sortone(array, 0, size - 1, size);
}

/**
 *
 *
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
/**
 *
 *
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


