/*
 * Problem link: https://leetcode.com/problems/maximum-subarray/
 */
int maxSubArray(int* nums, int numsSize) {
    int maxSum = *nums;
    register int currentSum;

    for (currentSum = 0; numsSize > 0; numsSize--) {
        currentSum += *(nums + numsSize-1);
        
        if (maxSum < currentSum) {
            maxSum = currentSum;
        }
        
        if (currentSum < 0) {
            currentSum = 0;
        }
    }

    return maxSum;
}