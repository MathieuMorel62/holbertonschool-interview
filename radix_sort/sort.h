#ifndef __SORT_H__
#define __SORT_H__

#include <stdio.h>
#include <stdlib.h>

int getMax(int *array, size_t size);
void countSort(int *array, size_t size, int exp);
void radix_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
int main(void);

#endif /* __SORT_H__ */
