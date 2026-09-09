class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            bool swapped = false;
            for (int j = 0; j < n - i - 1; j++) {
                if (nums[j] > nums[j + 1]) {

                    swap(nums[j], nums[j + 1]);
                    swapped = true;
                }
            }
            // Stop early if the array is already sorted
            if (!swapped)
                break;
        }
        return nums;   // Remove this line if the function is void
    }
};
