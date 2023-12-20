#include "sort.h"

/**
 * swap - Swap two integers in an array.
 * @x: The first integer to swap.
 * @y: The second integer to swap.
 */
void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @arr: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *arr, size_t size)
{
	size_t i, len = size;
	bool sorted = false;

	if (arr == NULL || size < 2)
		return;

	while (sorted == false)
	{
		sorted = true;
		for (i = 0; i < len - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				swap(arr + i, arr + i + 1);
				print_array(arr, size);
				sorted = false;
			}
		}
		len--;
	}
}
