/*
    Date: Mar 26, 2023
    Problem Link: https://leetcode.com/problems/sqrtx/
    Diff: Easy
    ---
    Iterative solution
*/
#include <stdio.h>

unsigned int extract_bits(unsigned n, int lbound, int ubound);

/* aprox_sqrt: return the rounded down square root of an
    non-negative given integer `x` */
int mySqrt(int x)
{
    unsigned solution = 0;
    unsigned divisor = 0;
    unsigned u32x = (unsigned) x;
    unsigned pairmask = UINT32_C(3) << 30;

    unsigned current;
    int bit;
    for (current = bit = 2; bit <= 32; bit += 2) {
        pairmask = pairmask | ((unsigned) 3 << (32 - bit));
        divisor = (solution << 2) + (unsigned) 1;
        current = (u32x & pairmask) >> (32 - bit);

        if (divisor <= current) {
            solution = (solution << 1) | (unsigned) 1;
            u32x = (current - divisor) << (32 - bit) | extract_bits(u32x, bit, 32);
        } else
            solution <<= 1;
    }

    return solution;
}

/* extract_bits: extract a range of bits from `n`. The function assume
    that we are working with 32-bit integers. */
unsigned int extract_bits(unsigned n, int lbound, int ubound)
{
    if (ubound < lbound) goto invalid_range;

    unsigned result = 0;
    unsigned bitmask = UINT32_C(1) << 31;

    for (; lbound < ubound; lbound++)
        result = result | (n & (bitmask >> lbound));
    return result;

invalid_range:
    puts("extract_bits: invalid range ubound > lbound");
    return 0;
}
