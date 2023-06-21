/*
    Date: Jun 21, 2023
    Problem link: https://leetcode.com/problems/counting-bits/
*/
class Solution {
    public int[] countBits(int n) {
        int ans[] = new int[n+1];
        int counter;
        int cur_n;

        for (int i = 0; i < n+1; i++) {
            counter = 0;
            cur_n = i;
            while (cur_n > 0) {
                cur_n &= (cur_n - 1);
                counter++;
            }
            ans[i] = counter; 
        }

        return ans;
    }
}