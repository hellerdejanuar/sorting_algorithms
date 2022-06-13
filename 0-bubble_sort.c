#include "sort.h"

/**
 * bubble_sort - bubble sort algoriothm
 * @array: array
 * @size: size
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, aux = 0, completed = 0;

	while (!completed)
	{
		i = 0;
		completed = 1;

		while (i + 1 < size)
		{
			if (array[i] > array[i + 1])
			{
				completed = 0;

				aux = array[i];
				array[i] = array[i + 1];
				array[i + 1] = aux;

				print_array(array, size);

				i++;
			}

			else
				i++;
		}
	}
}
