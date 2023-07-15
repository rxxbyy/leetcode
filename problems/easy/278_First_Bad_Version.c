/*
    Date: Jul 14, 202
    Problem link: https://leetcode.com/problems/first-bad-version/
*/

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    long int low = 1, high = n;
    int bad_version = n;

    while (low <= high) {
        long mid = (low + high) >> UINT32_C(1);
        
        if (isBadVersion(mid)) {
            bad_version = mid;
            high = mid - 1;
        } else low = mid + 1;
    }
    
    return bad_version;
}

