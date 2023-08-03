int longestAlternatingSubarray(int* nums, int numsSize, int threshold)
{
    int l, r, i, max_length = 0, cur_length = 0;

    for (l = 0; l < numsSize; l++) {
        if ((nums[l] & INT32_C(1)) == 0 && nums[l] <= threshold) {
            r = l + 1;
            while (r < numsSize && nums[r-1] <= threshold && nums[r] <= threshold && (nums[r-1] & INT32_C(1)) != (nums[r] & INT32_C(1))) {
                r++;
            }
            cur_length = r - l + 1;
            if (cur_length > max_length)
                max_length = cur_length;
        }
    }

    return (max_length > 0 ? max_length - 1 : 0);
}

