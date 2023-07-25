#include "sort.h"
/**
* partition_funt - partition function
* @array: array
* @p: low 1 positions
* @d: high 2 positions
* @size: size
* Return: pivot
*/
int partition_funt(int *array, int p, int d, size_t size)
{
int j = p - 1, cnp, k;
for (k = p; k <= d - 1; k++)
{
if (array[k] < array[d])
{
j++;
if (j < k)
{
cnp = array[j];
array[j] = array[k];
array[k] = cnp;
print_array(array, size);
}
}
}
if (array[j + 1] > array[d])
{
cnp = array[j + 1];
array[j + 1] = array[d];
array[d] = cnp;
print_array(array, size);
}
return (j + 1);
}
/**
* quick - quick sort function
* @ar: array list
* @pr: premier pos
* @d: dernier pos
* @size: size
*/
void quick(int *ar, int pr, int d, size_t size)
{
int pivo;
if (pr < d)
{
pivo = partition_funt(ar, pr, d, size);
quick(ar, pr, pivo - 1, size);
quick(ar, pivo + 1, d, size);
}
}
/**
* quick_sort - quick sort
* @array: array
* @size: size
*/
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;
quick(array, 0, size - 1, size);
}
