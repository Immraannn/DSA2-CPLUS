
class Solution {
public:
    string removeFirst(string s, char target) {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == target) {
                s.erase(i, 1);
                break;
            }
        }
        return s;
    }
};
