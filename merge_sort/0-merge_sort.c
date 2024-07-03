#include "sort.h"


/**
 * merge_sort - Sorts an array of integers in ascending
 * order using the Merge Sort algorithm
 *
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */
void merge_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	size_t mid = size / 2;

	int *left = (int *)malloc(mid * sizeof(int));
	int *right = (int *)malloc((size - mid) * sizeof(int));

	for (size_t i = 0; i < mid; i++)
		left[i] = array[i];
	for (size_t i = mid; i < size; i++)
		right[i - mid] = array[i];

	merge_sort(left, mid);
	merge_sort(right, size - mid);

	merge(array, left, mid, right, size - mid);

	free(left);
	free(right);
}

/**
 * merge - Merges two arrays into one
 *
 * @array: The array to be merged
 * @left: The left array
 * @left_size: Number of elements in @left
 * @right: The right array
 * @right_size: Number of elements in @right
 */
void merge(
	int *array, int *left, size_t left_size, int *right, size_t right_size)
{
	size_t i = 0, j = 0, k = 0;

	printf("Merging...\n[left]: ");
	print_array(left, left_size);
	printf("[right]: ");
	print_array(right, right_size);

	while (i < left_size && j < right_size)
	{
		if (left[i] <= right[j])
			array[k++] = left[i++];
		else
			array[k++] = right[j++];
	}

	while (i < left_size)
		array[k++] = left[i++];
	while (j < right_size)
		array[k++] = right[j++];

	printf("[Done]: ");
	print_array(array, left_size + right_size);
}
