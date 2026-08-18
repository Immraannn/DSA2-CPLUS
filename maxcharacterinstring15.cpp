class Solution {
public:
    char maxOccurringCharacter(string s) {
        unordered_map<char, int> freq;

        // Count frequency
        for (char ch : s) {
            freq[ch]++;
        }

        // Find maximum
        char answer = s[0];
        int maxFreq = 0;

        for (auto it : freq) {
            if (it.second > maxFreq) {
                maxFreq = it.second;
                answer = it.first;
            }
        }

        return answer;
    }
};
