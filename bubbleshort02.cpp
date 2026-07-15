class Solution {
public:
    // Change the return type according to the problem
    // void bubbleSort(vector<int>& nums)
    // OR
    // vector<int> sortArray(vector<int>& nums)

    vector<int> sortArray(vector<int>& nums) {

        int n = nums.size();

        // Number of passes
        for (int i = 0; i < n - 1; i++) {

            bool swapped = false;

            // Compare adjacent elements
            for (int j = 0; j < n - i - 1; j++) {

                // Swap if elements are in the wrong order
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
