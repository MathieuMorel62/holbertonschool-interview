#include "sort.h"


/**
 * merge_and_print - Merges two subarrays of array[] and prints the process
 * @array: The array to be merged
 * @left: The left index of the first subarray
 * @middle: The middle index which divides the subarrays
 * @right: The right index of the second subarray
 * @temp: Temporary array to store merged elements
 */
void merge_and_print(
	int *array, size_t left, size_t middle, size_t right, int *temp)
{
	size_t i = left, j = middle, k = 0;

	printf("Merging...\n");
	printf("[left]: ");
	print_array(array + left, middle - left);
	printf("[right]: ");
	print_array(array + middle, right - middle);

	while (i < middle && j < right)
	{
		if (array[i] < array[j])
		{
			temp[k++] = array[i++];
		}
		else
		{
			temp[k++] = array[j++];
		}
	}

	while (i < middle)
	{
		temp[k++] = array[i++];
	}

	while (j < right)
	{
		temp[k++] = array[j++];
	}

	for (i = left, k = 0; i < right; i++, k++)
	{
		array[i] = temp[k];
	}

	printf("[Done]: ");
	print_array(array + left, right - left);
}


/**
 * merge_sort_recursive - Recursively sorts an array using merge sort
 * @array: The array to be sorted
 * @left: The left index of the subarray
 * @right: The right index of the subarray
 * @temp: Temporary array to store merged elements
 */
void merge_sort_recursive(int *array, size_t left, size_t right, int *temp)
{
	size_t middle;

	if (right - left < 2)
		return;

	middle = (left + right) / 2;
	merge_sort_recursive(array, left, middle, temp);
	merge_sort_recursive(array, middle, right, temp);

	merge_and_print(array, left, middle, right, temp);
}


/**
 * merge_sort - Sorts an array of integers in ascending
 * order using the Merge Sort algorithm
 *
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */
void merge_sort(int *array, size_t size)
{
	int *temp;

	if (size < 2)
		return;

	temp = malloc(sizeof(int) * size);
	if (!temp)
	{
		perror("Failed to allocate memory");
		return;
	}

	merge_sort_recursive(array, 0, size, temp);
	free(temp);
}
