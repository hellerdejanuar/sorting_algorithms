#include "sort.h"

/**
 * quick_sort - quick sort wrapper
 * @array: array
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	quick_sort_recursion(array, size, 0, size);
}

/**
 * quick_sort_recursion - quick sort algorithm
 * @array: array
 * @size: size of the array
 * @low: lower limit of sub array
 * @high: higher limit of sub array
 */
void quick_sort_recursion(int *array, size_t size, size_t low, size_t high)
{
	size_t piv = high, i = low, j;

	if (low < high)
	{
		for (j = low; j < high; j++)
		{
			if (array[j] <= array[piv])
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
				i++;
			}
		}
		swap(&array[i], &array[high]);
		print_array(array, size);

		quick_sort_recursion(array, size, low, i - 1);
		quick_sort_recursion(array, size, i + 1, high);
	}
}

/**
 * swap - swaps two integers in place
 * @a: int a
 * @b: int b
 */
void swap(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
