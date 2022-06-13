#include "sort.h"

/**
 * selection_sort - selection sort algorithm
 * @array: array
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, comp = 0;
	int aux;

	for (i = 0; i < size - 1; i++)
	{
		comp = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[comp] > array[j])
				comp = j;
		}

		if (comp != i)
		{
			/* swap */
			aux = array[i];
			array[i] = array[comp];
			array[comp] = aux;

			print_array(array, size);
		}
	}
}
