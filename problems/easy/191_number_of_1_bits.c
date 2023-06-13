/*
    Date: Jan 14, 2023
    Problem Link: https://leetcode.com/problems/number-of-1-bits/
    Diff: Easy
    ---
    Iterative solution using bitwise operations
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint-gcc.h>

typedef byte;

byte hammingWeight(uint32_t n) {
    byte ans = 0;

    while (n > 0) {
        ++ans;
        n &= (n-1);
    }

    return ans;
}