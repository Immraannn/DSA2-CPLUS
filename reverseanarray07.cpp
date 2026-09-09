class Solution {
public:
    void reverseArray(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        while (left < right) {
            swap(nums[left], nums[right]);
            left++;
            right--;
        }
        // return nums;for return type
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



