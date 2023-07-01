/*
    Date: Jun 30, 2023
    Problem link: https://leetcode.com/problems/move-zeroes/
*/
#include <stdio.h>

/* 
==========================
    "Snow ball" aproach
==========================
*/ 
void moveZeroes(int* nums, int numsSize){
    int snowball_size = 0;
    int i, temp;

    for (i = 0; i < numsSize; i++) {
        if (nums[i] == 0)
            snowball_size++;
        else {
            temp = nums[i];
            nums[i] = 0;
            nums[i - snowball_size] = temp;
        }
    }
}

/*
=================================
    "Insertion sort" thinking
=================================
*/
void moveZeroes(int* nums, int numsSize){
    int ub_index = numsSize - 1;                /* upper bound index */
    int temp;

    for (int i = numsSize - 1; i >= 0; i--) {
        if (nums[i] == 0) {
            int j = ub_index;
            while (j > i) {
                temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;

                j--;
            }
            ub_index--;
        }
    }
}