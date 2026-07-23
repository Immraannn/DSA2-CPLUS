class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        // Frequency array for all ASCII characters
        vector<int> freq(256, 0);

        // Left pointer of the sliding window
        int left = 0;

        // Stores the maximum length found so far
        int ans = 0;

        // Expand the window by moving the right pointer
        for (int right = 0; right < s.length(); right++) {

            // Include the current character in the window
            freq[s[right]]++;

            // If the current character appears more than once,
            // shrink the window from the left until it becomes unique
            while (freq[s[right]] > 1) {// dont run the loop until anyone freq >!

                // Remove the leftmost character from the window
                freq[s[left]]--;

                // Move the left pointer forward
                left++;
            }

            // Current window contains all unique characters,
            // so update the maximum length
            ans = max(ans, right - left + 1);
        }

        // Return the length of the longest substring
        // without repeating characters
        return ans;
    }
};
