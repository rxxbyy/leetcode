/*
    Date: Jan 14, 2023
    Problem Link: https://leetcode.com/problems/length-of-last-word/
    Diff: Easy
    ---
    Iterative solution
*/
#include <stdio.h>


int lengthOfLastWord(char * s){
    int i, answer;

    answer = 0;
    i = strlen(s)-1;
    while (isspace(s[i])) /* ignoring right whitespaces */
        i--;

    for (; !isspace(s[i]) && i > 0; i--) /* counting the last word length */
        answer++;
    
    return (!isspace(s[i]) ? ++answer : answer);
}