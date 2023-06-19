/*
    Date: Jun 18, 2023
    Problem link: https://leetcode.com/problems/find-the-highest-altitude/
    ---
    Linear solution (0ms)
*/
#include <stdio.h>

int largestAltitude(int* gain, int gainSize)
{
    int i;
    int max_altitude, cur_altitude;

    cur_altitude = gain[0];
    max_altitude = 0;

    for (i = 1; i < gainSize; i++) {
        if (cur_altitude > max_altitude)
            max_altitude = cur_altitude;

        cur_altitude += gain[i];
    }

    return (cur_altitude > max_altitude ? cur_altitude : max_altitude);
}
