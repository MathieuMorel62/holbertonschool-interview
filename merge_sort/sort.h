#ifndef _MERGE_SORT_H_
#define _MERGE_SORT_H_


#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>


void merge_and_print(
	int *array, size_t left, size_t middle, size_t right, int *temp);
void merge_sort_recursive(int *array, size_t left, size_t right, int *temp);
void merge_sort(int *array, size_t size);
void print_array(const int *array, size_t size);

#endif /* _MERGE_SORT_H_ */
