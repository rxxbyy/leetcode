/*
    Date: Jun 26, 2023
    Problem link: https://leetcode.com/problems/array-partition
*/

#include <stdio.h>

int cmp (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int arrayPairSum(int* nums, int numsSize){
    qsort(nums, numsSize, sizeof(int), cmp);
    
    int sum = 0;
    while ((numsSize -= 2) >= 0)
        sum += nums[numsSize];
    
    return sum;
}
