/*
    Date: Jun 12, 2023
    Problem Link: https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/
    Diff: Easy
    ---
    Divide & Conquer Solution
*/
#include <stdio.h>

/* number_of_steps: return the numbers of steps to reduce a
    number to zero */
int number_of_steps(int num)
{
    /* We have a trivial case: when num equals zero; and the 
    recursive base case: when num equals one (we only need to subtract 1) */
    if (num <= 1)
        return num;
    else if ((num & __INT32_C(1)) == 0)
        return 1 + number_of_steps(num >> 1);
    else
        return 2 + number_of_steps((num - 1) >> 1);
}
