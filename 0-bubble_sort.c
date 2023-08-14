#include "sort.h"
/**
 * bubble_sort - sorts an array of ints in ascending order
 * @array: array to be sorted
 * @size: number of elements in array
 */

void bubble_sort(int *array, size_t size);
{
	soize_t i, j;
	int temp;
	int swapped;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		swapped = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1]
				array[j + 1] = temp;
				swapped = 1;

				print_array(array, size);
			}
		}
		if (swapped == 0)
			break;
	}
}
