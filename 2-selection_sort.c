#include "sort.h"
/**
 * bubble_sort - Sorts an array of integers in ascending order using
 *               the bubble sort algorithm.
 * @array: Pointer to the first element of the array to be sorted.
 * @size: Number of elements in the array.
 */
void selection_sort(int *array, size_t size)
{
size_t i, y, z, v;
for (i = 0; i < size - 1; i++)
{
z = i;
for (y = i + 1; y < size; y++)
{
if (array[z] > array[y])
{
z = y;
}
v = array[z];
array[z] = array[i];
array[z] = v;
}
print_array(array,size);
}
}
