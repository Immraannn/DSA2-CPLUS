class Solution {
public:
    char maxOccurringCharacter(string s) {

        // Frequency array for 26 lowercase letters
        vector<int> freq(26, 0);

        // Count frequency of each character
        for (int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a']++;
        }

        // Find the character with maximum frequency
        int maxFreq = 0;
        char answer = 'a';

        for (int i = 0; i < 26; i++) {

            if (freq[i] > maxFreq) {
                maxFreq = freq[i];
                answer = i + 'a';
            }
        }

        return answer;
    }
};
