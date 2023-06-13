/*
    Date: Jan 14, 2023
    Problem Link: https://leetcode.com/problems/reverse-bits/
    Diff: Easy
    ---
    Iterative solution using bitwise operations
*/
#include <stdio.h>
#include <stdint.h>

uint32_t reverseBits(uint32_t n) {
    uint32_t bitmask = (unsigned) 1 << 31; /* 10000000 00000000 00000000 00000000 */
    uint32_t ans;

    ans = 0; /* 00000000 00000000 00000000 00000000 */
    for (int bit = 0; bit < 32; bit++) {
        if (n & bitmask)
            ans |= (unsigned) 1 << bit;

        bitmask >>= 1;
    }
    
    return ans;
}
