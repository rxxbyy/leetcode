/*
    Date: Jun 17, 2023
    Problem link: https://leetcode.com/problems/majority-element/
    Diff: Easy
    ---
    Using Boyer-Moore Majority Voting Algorithm
*/

/* majorityElement: return the element in `nums` that appears
    more than floor(|nums| / 2) times. */
int majorityElement(int* nums, int numsSize)
{
    int maj, count;
    int i;

    for (count = i = 0; i < numsSize; i++) {
        if (count)
            count += (nums[i] == maj ? 1 : -1);
        else {
            maj = nums[i];
            count = 1;
        }
    }

    return maj;
}
