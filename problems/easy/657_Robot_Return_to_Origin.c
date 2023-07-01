/*
    Date: Jul 1, 2023
    Problem link: https://leetcode.com/problems/robot-return-to-origin/
*/

#include <stdio.h>
#include <stdbool.h>

/* jugdeCircle: return if a robot returns to the origin */
bool judgeCircle(char * moves){
    int umoves, dmoves, lmoves, rmoves;

    for (umoves = dmoves = lmoves = rmoves = 0; *moves != '\0'; moves++) {
        switch (*moves) {
            case 'U':
                umoves++;
                break;
            case 'D':
                dmoves++;
                break;
            case 'L':
                lmoves++;
                break;
            case 'R':
                rmoves++;
                break;
        }
    }

    return !(umoves - dmoves) && !(lmoves - rmoves);
}