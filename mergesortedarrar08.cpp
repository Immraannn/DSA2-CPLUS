
class Solution {
public:
    vector<int> mergeSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        vector<int> ans;

        int i = 0;
        int j = 0;

        while (i < nums1.size() && j < nums2.size()) {

            if (nums1[i] <= nums2[j]) {
                ans.push_back(nums1[i]);
                i++;
            } else {
                ans.push_back(nums2[j]);
                j++;
            }
        }

        while (i < nums1.size()) {
            ans.push_back(nums1[i]);
            i++;
        }

        while (j < nums2.size()) {
            ans.push_back(nums2[j]);
            j++;
        }

        return ans;
    }
};


class Solution {
public:
    void mergeSortedArray(vector<int>& nums1, vector<int>& nums2) {

        // Store the merged array
        vector<int> ans;

        int i = 0;
        int j = 0;

        // Merge both arrays
        while (i < nums1.size() && j < nums2.size()) {

            if (nums1[i] <= nums2[j]) {
                ans.push_back(nums1[i]);
                i++;
            }
            else {
                ans.push_back(nums2[j]);
                j++;
            }
        }

        // Copy remaining elements of nums1
        while (i < nums1.size()) {
            ans.push_back(nums1[i]);
            i++;
        }

        // Copy remaining elements of nums2
        while (j < nums2.size()) {
            ans.push_back(nums2[j]);
            j++;
        }

        // Copy the merged array back into nums1
        nums1 = ans;
    }
};
