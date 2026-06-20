# Minimum Pair Removal to Sort Array I

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array `nums`, you can perform the following operation any number of times:

- Select the adjacent pair with the minimum sum in nums. If multiple such pairs exist, choose the leftmost one.
- Replace the pair with their sum.

Return the  **minimum number of operations**  needed to make the array  **non-decreasing**.

An array is said to be  **non-decreasing**  if each element is greater than or equal to its previous element (if it exists).

 

 **Example 1:** 

 **Input:**  nums = [5,2,3,1]

 **Output:**  2

 **Explanation:** 

- The pair (3,1) has the minimum sum of 4. After replacement, nums = [5,2,4].
- The pair (2,4) has the minimum sum of 6. After replacement, nums = [5,6].

The array `nums` became non-decreasing in two operations.

 **Example 2:** 

 **Input:**  nums = [1,2,2]

 **Output:**  0

 **Explanation:** 

The array `nums` is already sorted.

 

 **Constraints:** 

- 1 <= nums.length <= 50
- -1000 <= nums[i] <= 1000

## Solution

**Language:** C++  
**Runtime:** 4 ms (beats 21.41%)  
**Memory:** 26.6 MB (beats 59.40%)  
**Submitted:** 2026-06-20T17:00:48.261Z  

```cpp
class Solution {
public:
    bool sorted(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < nums[i - 1]) return false;
        }
        return true;
    }

    int minimumPairRemoval(vector<int>& nums) {
        int ans = 0;

        while (!sorted(nums)) {
            int idx = 0;
            int mn = nums[0] + nums[1];

            for (int i = 1; i + 1 < nums.size(); i++) {
                int s = nums[i] + nums[i + 1];
                if (s < mn) {
                    mn = s;
                    idx = i;
                }
            }

            nums[idx] = mn;
            nums.erase(nums.begin() + idx + 1);

            ans++;
        }

        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/minimum-pair-removal-to-sort-array-i/)