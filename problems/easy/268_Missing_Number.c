/*
 *	Date: Jul 6, 2023
 *	Problem Link: https://leetcode.com/problems/missing-number
 */

/* missingNumber: return the missing number in nums */
int missingNumber(int* nums, int numsSize){
    int r = numsSize*(numsSize+1)/2;
    int i;

    for (i = 0; i < numsSize; i++)
        r = r-nums[i];
    return r;
}

