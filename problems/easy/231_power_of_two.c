/*
    Date: Jun 16, 2023
    Problem link: https://leetcode.com/problems/power-of-two/
    Diff: Easy
    ---
*/
#include <stdio.h>
#include <stdbool.h>

/* isPowerOfTwo: return if `n` is a power of two, this is, there exists a
    number x such that 2^x = n. */
bool isPowerOfTwo(int n)
{
    if (n <= 0)
        return false;
    return (n & (n - 1)) == 0;
}

/* 
    N O T E:
    The numbers that have exactly one bits 1 in his encoding are powers of two.
*/
