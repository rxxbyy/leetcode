/*
    Date: Jun 26, 2023
    Problem Link: https://leetcode.com/problems/chunk-array/
*/

/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array[]}
 */
const chunk = (arr, size) => {
    arr.unshift(-1); /* auxiliar element */

    let array = [];
    let subarray = [];

    for (let i = 1; i < arr.length; i++) {
        subarray.push(arr[i]);
        if (i % size === 0 || i + 1 === arr.length) {
            array.push(subarray);
            subarray = [];
        }
    }

    return array;
};