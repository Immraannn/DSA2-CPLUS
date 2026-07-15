class Solution {
public:
    vector<int> sumOfArray(vector<int>& a, vector<int>& b) {
        vector<int> ans;
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;
        // Continue until both arrays and carry are exhausted
        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            // Add digit from first array
            if (i >= 0) {
                sum += a[i];
                i--;
            }
            // Add digit from second array
            if (j >= 0) {
                sum += b[j];
                j--;
            }
            // Store the last digit
            ans.push_back(sum % 10);
       // Update carry
            carry = sum / 10;
        }
        // Digits are stored in reverse order
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
