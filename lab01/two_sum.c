#include "two_sum.h"

int two_sum(const int* nums, int n, int target, int* out_i, int* out_j) {

 // finish your code here

    if (!nums || n < 2 || !out_i || !out_j) {
        return 0;
    }

    // Brute force (array-only) solution: O(n^2), no extra data structures.
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                *out_i = i;
                *out_j = j;
                return 1;
            }
        }
    }

    return 0; // no solution found

}

//think about the time complexity and space complexity of your solution
