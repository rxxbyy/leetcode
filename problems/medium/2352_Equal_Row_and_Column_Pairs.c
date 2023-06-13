/*
    Date: Jun 13, 2023
    Problem link: https://leetcode.com/problems/equal-row-and-column-pairs/
    Diff: Medium
    ---
    Brute force approach solution
*/
#include <stdio.h>
#include <stdbool.h>

/* equal_pairs: return the number of pairs (r_i, c_j) such that 
    row r_i and column c_j are equal */
int equal_pairs(int **grid, int grid_size, int *grid_col_size)
{
    int compare(int *column, int **grid, int *grid_size); /* prototype */

    int i;
    int result;

    for (result = i = 0; i < grid_size; i++) {
        result += compare(&i, grid, &grid_size);
    }

    return result;
}

int compare(int *column, int **grid, int *grid_size)
{
    int i, j;
    int result;

    bool equal;
    for (result = i = 0; i < *grid_size; i++) {
        equal = true;
        for (j = 0; j < *grid_size; j++) {
            if (grid[j][*column] != grid[i][j]) {
                equal = false;
                break;
            }
        }
        if (equal)
            result++;
    }

    return result;
}