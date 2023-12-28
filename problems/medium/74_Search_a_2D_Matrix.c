#include <stdbool.h>
#include <stdio.h>


bool binarySearch(int *arr, int *arrSize, int *target);

bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int low = 0;
    int high = matrixSize;
    int mid;

    bool found = false;
    while (low <= high) {
        mid = (low + high) / 2;

        if (target < matrix[mid][0]) {
            high = mid - 1;
        } else {
            found = binarySearch(matrix[mid], &matrixColSize[mid], &target);

            if (!found && (mid + 1) < matrixSize) {
                low = mid + 1;
            } else break;
        }
    }

    return found;
}

bool binarySearch(int *arr, int *arrSize, int *target)
{
    int low = 0;
    int high = *arrSize;
    int mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (mid == *arrSize) {
            break;
        }

        if (arr[mid] == *target) {
            return true;
        } else if (arr[mid] > *target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return false;
}