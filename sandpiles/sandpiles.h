#ifndef __SANDPILES_H__
#define __SANDPILES_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


static void print_grid(int grid[3][3]);
bool is_stable(int grid[3][3]);
void toppling(int grid[3][3]);
void sandpiles_sum(int grid1[3][3], int grid2[3][3]);


#endif /* __SANDPILES_H__ */
