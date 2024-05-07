#include "sort.h"

/**
 * sift_down - Maintains the max-heap property.
 * @array: The array to sort.
 * @start: The starting index.
 * @end: The ending index.
 * @size: The size of the array.
 */
void sift_down(int *array, int start, int end, size_t size)
{
	int root, child, swap, temp;

	root = start;
	while ((2 * root + 1) <= end)
	{
		child = 2 * root + 1;
		swap = root;

		if (array[swap] < array[child])
			swap = child;
		if (child + 1 <= end && array[swap] < array[child + 1])
			swap = child + 1;
		if (swap == root)
			return;

		/* Swap and print */
		temp = array[root];
		array[root] = array[swap];
		array[swap] = temp;
		print_array(array, size);

		root = swap;
	}
}

/**
 * heap_sort - Sorts an array of integers in ascending order using Heap sort.
 * @array: The array to sort.
 * @size: The size of the array.
 */
void heap_sort(int *array, size_t size)
{
	int i, temp;

	if (array == NULL || size < 2)
		return;

	/* Build the max heap */
	for (i = (size / 2) - 1; i >= 0; i--)
		sift_down(array, i, size - 1, size);

	/* Sort the array */
	for (i = size - 1; i > 0; i--)
	{
		temp = array[0];
		array[0] = array[i];
		array[i] = temp;
		print_array(array, size);
		sift_down(array, 0, i - 1, size);
	}
}
