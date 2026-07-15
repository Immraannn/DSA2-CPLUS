class Solution {
public:
    void reverseArray(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        // Continue until both pointers meet
        while (left < right) {
            // Swap the left and right elements
            swap(nums[left], nums[right]);
            // Move left pointer forward
            left++;
            // Move right pointer backward
            right--;
        }
    }
};




class Solution {
public:
    vector<int> reverseArray(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        // Swap elements from both ends
        while (left < right) {
            swap(nums[left], nums[right]);
            left++;
            right--;
        }
        // Return the reversed vector
        return nums;
    }
};



| Task                   | Return Type   |
| ---------------------- | ------------- |
| Reverse array in-place | `void`        |
| Return reversed array  | `vector<int>` |
| Return an index        | `int`         |
| Return true/false      | `bool`        |
| Return multiple values | `vector<int>` |
