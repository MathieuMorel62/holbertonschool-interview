#include "slide_line.h"

/**
 * merge_and_slide_left - Slides and merges an array to the left.
 * @line: Points to an array of integers containing size elements.
 * @size: Number of elements in @line.
 */
void merge_and_slide_left(int *line, size_t size)
{
    size_t index = 0;
	size_t i;

    for (i = 0; i < size; i++)
	{
        if (line[i] != 0)
		{
            if (index < i)
			{
                line[index] = line[i];
                line[i] = 0;
            }
            if (i + 1 < size && line[i + 1] == line[index])
			{
                line[index++] *= 2;
                line[i + 1] = 0;
            }
			else
			{
                index++;
            }
        }
    }
}

/**
 * merge_and_slide_right - Slides and merges an array to the right.
 * @line: Points to an array of integers containing size elements.
 * @size: Number of elements in @line.
 */
void merge_and_slide_right(int *line, size_t size) {
    if (size == 0) return;

    size_t index, i;

    index = size - 1;

    for (i = size - 1; i < size; i--) {
        if (line[i] != 0) {
            if (i < index) {
                line[index] = line[i];
                line[i] = 0;
            }
            if (i > 0 && line[i - 1] == line[index]) {
                line[index--] *= 2;
                line[i - 1] = 0;
            } else if (i > 0) {
                index--;
            }
        }
    }
}

/**
 * slide_line - Slides and merges an array of integers
 * @line: Points to an array of integers containing size elements.
 * @size: Number of elements in @line.
 * @direction: Left or right.
 * Return: 1 upon success, or 0 upon failure.
 */
int slide_line(int *line, size_t size, int direction)
{
    if (direction == SLIDE_LEFT)
	{
        merge_and_slide_left(line, size);
    }
	else if (direction == SLIDE_RIGHT)
	{
        merge_and_slide_right(line, size);
    }
	else
	{
        return 0;
    }

    return 1;
}
