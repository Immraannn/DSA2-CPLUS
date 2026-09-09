class Solution {
public:
    vector<int> sumOfArray(vector<int>& a, vector<int>& b) {
        vector<int> ans;
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;
        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) {
                sum += a[i];
                i--;
            }
            if (j >= 0) {
                sum += b[j];
                j--;
            }
            ans.push_back(sum % 10);
            carry = sum / 10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
