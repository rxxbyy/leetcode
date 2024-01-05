/*
 * Problem link: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/ 
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int *range = (int *) malloc(sizeof(int) * 2);
    range[0] = -1;
    range[1] = -1;

    int low = 0;
    int high = numsSize - 1;
    int mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (nums[mid] > target) {
            high = mid - 1;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            low = mid;
            high = mid;

            while (low > 0 && nums[low - 1] == target) {
                low--;
            }

            while (high < numsSize - 1 && nums[high + 1] == target) {
                high++;
            }

            range[0] = low;
            range[1] = high;
            *returnSize = 2;
            return range;
        }
    }

    *returnSize = 2;
    return range;
}
