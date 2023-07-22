#include "sort.h"
/**
 * bubble_sort - Sorts an array of integers in ascending order using
 *               the bubble sort algorithm.
 * @array: Pointer to the first element of the array to be sorted.
 * @size: Number of elements in the array.
 */
void bubble_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;
size_t i, y, z;
for (i = 0; i < size - 1; i++)
{
for (y = 0; y < size - 1; y++)
{
if (array[y] > array[y + 1])
{
z = array[y];
array[y] = array[y + 1];
array[y + 1] = z;
print_array(array, size);
}
}
}
}
