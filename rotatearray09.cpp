class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        // If k is greater than n
        k = k % n;
        // Temporary array
        vector<int> ans(n);
        // Place every element at its new position
        for (int i = 0; i < n; i++) {
            ans[(i + k) % n] = nums[i];
        }
        // Copy back to original array
        nums = ans;
    }
};


class Solution {
public:
    vector<int> rotate(vector<int>& nums, int k) {

        int n = nums.size();
        k = k % n;

        vector<int> ans(n);

        for (int i = 0; i < n; i++) {
            ans[(i + k) % n] = nums[i];
        }

        return ans;// for return type
    }
};
