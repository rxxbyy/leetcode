/*
    Date: Jul 1, 2023
    Problem Link: https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
*/

#include <stdio.h>

/* findDisappearedNumbers: return an array of numbers that doesn't appear in @param{nums} */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize){
    int *sup = (int *) malloc(numsSize * sizeof(int));
    int *ans;
    int i, j;

    for (i = 0; i < numsSize; i++)
        sup[i] = i + 1;
    
    *returnSize = numsSize;
    for (i = 0; i < numsSize; i++)
        if (sup[nums[i] - 1] != 0) {
            sup[nums[i] - 1] = 0;
            (*returnSize)--;
        }
    
    ans = (int *) malloc(sizeof(int) * (*returnSize));
    for (j = i = 0; i < numsSize; i++) {
        if (sup[i] != 0) {
            ans[j] = sup[i];
            j++;
        }
    }

    return ans;
}