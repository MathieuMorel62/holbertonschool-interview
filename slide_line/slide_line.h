#ifndef __SLIDE_LINE_H__
#define __SLLINE_LINE_H__

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#define SLIDE_LEFT 0
#define SLIDE_RIGHT 1

int slide_line(int *line, size_t size, int direction);
void slide_left(int *line, size_t size);
void slide_right(int *line, size_t size);
void merge_left(int *line, size_t size);
void merge_right(int *line, size_t size);

#endif /* __SLIDE_LINE_H__ */
