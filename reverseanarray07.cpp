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

| Return Type           | Returns               | Example                        |
| --------------------- | --------------------- | ------------------------------ |
| `int`                 | One integer           | Index, sum, maximum value      |
| `bool`                | `true` or `false`     | Search, palindrome check       |
| `char`                | One character         | First unique character         |
| `string`              | One string            | Reverse string, decoded string |
| `vector<int>`         | Entire integer vector | Sorted array, reversed array   |
| `vector<vector<int>>` | 2D vector             | 3Sum, subsets                  |
| `void`                | Nothing               | Modify array in place          |



