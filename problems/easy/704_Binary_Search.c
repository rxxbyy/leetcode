/*
    Date: Jul 1, 2023
    Problem link: https://leetcode.com/problems/binary-search/
*/

#include <stdio.h>


int search(int* nums, int numsSize, int target)
{
    int low = 0;
    int high = numsSize - 1;
    int mid;

    while (low <= high) {
        mid = (low + high) / 2;
        if (nums[mid] == target)
            return mid;
        
        if (nums[mid] < target)
            low = mid + 1;
        else high = mid - 1;
    }

    return -1;
}