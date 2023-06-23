/*
    Date: Jun 23, 2023
    Problem link: https://leetcode.com/problems/assign-cookies/
*/
#include <stdio.h>
#include <stdlib.h>


int cmp (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

/* findContentChildren: return the maximum number of content children */
int findContentChildren(int* g, int gSize, int* s, int sSize)
{
    qsort(g, gSize, sizeof(int), cmp);
    qsort(s, sSize, sizeof(int), cmp);
    int solution;

    solution = 0;
    while (gSize > 0 && sSize > 0)
        g[--gSize] <= s[--sSize] ? solution++ : sSize++;
    return solution;
}
