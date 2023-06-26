/*  Date: Jun 26, 2023.
    Problem link: https://leetcode.com/problems/array-reduce-transformation/
*/

/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
const reduce = (nums, fn, init) => {
    let val = init;

    for (let i = 0; i < nums.length; i++)
        val = fn(val, nums[i]);

    return val;
};