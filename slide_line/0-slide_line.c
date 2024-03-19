#include "slide_line.h"

/**
 * merge_left - merges an array of integers to the left
 * @line: points to an array of integers containing size elements
 * @size: number of elements
*/
void merge_left(int *line, size_t size) {
	size_t i;
    for (i = 0; i < size - 1; i++) {
        if (line[i] != 0 && line[i] == line[i + 1]) {
            line[i] *= 2;
            line[i + 1] = 0;
            i++;
        }
    }
}

/**
 * slide_left - slides an array of integers to the left
 * @line: points to an array of integers containing size elements
 * @size: number of elements
*/
void slide_left(int *line, size_t size) {
    size_t j = 0;
	size_t i;
    for (i = 0; i < size; i++) {
        if (line[i] != 0) {
            if (i != j) {
                line[j] = line[i];
                line[i] = 0;
            }
            j++;
        }
    }
}

/**
 * slide_right - slides an array of integers to the right
 * @line: points to an array of integers containing size elements
 * @size: number of elements
*/
void slide_right(int *line, size_t size) {
    size_t j = size - 1;
	size_t i;
    for (i = size - 1; i != (size_t)-1; i--) {
        if (line[i] != 0) {
            if (i != j) {
                line[j] = line[i];
                line[i] = 0;
            }
            j--;
        }
    }
}

/**
 * merge_right - merges an array of integers to the right
 * @line: points to an array of integers containing size elements
 * @size: number of elements
*/
void merge_right(int *line, size_t size) {
	size_t i;
    for (i = size - 1; i > 0; i--) {
        if (line[i] != 0 && line[i] == line[i - 1]) {
            line[i] *= 2;
            line[i - 1] = 0;
            i--;
        }
    }
}

/**
 * slide_line - slides and merges an array of integers
 * @line: points to an array of integers containing size elements
 * @size: number of elements
 * @direction: left or right
 * Return: 1 upon success, or 0 upon failure
*/
int slide_line(int *line, size_t size, int direction) {
    if (direction == SLIDE_LEFT) {
        slide_left(line, size);
        merge_left(line, size);
    } else if (direction == SLIDE_RIGHT) {
        slide_right(line, size);
        merge_right(line, size);
    } else {
        return 0;
    }

    return 1;
}
