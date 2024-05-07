#ifndef __SORT_H__
#define __SORT_H__

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void heap_sort(int *array, size_t size);
void sift_down(int *array, int start, int end, size_t size);
void print_array(const int *array, size_t size);

#endif
