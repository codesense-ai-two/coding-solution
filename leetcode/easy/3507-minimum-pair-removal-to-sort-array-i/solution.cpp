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