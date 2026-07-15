class Solution {
public:
    string replaceSpaces(string s) {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                s[i] = '#';
            }
        }
        return s;
    }
};

class Solution {
public:
    string replaceSpaces(string s) {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                s.replace(i, 1, "@#");  //s.replace(position, number_of_characters_to_remove, new_string);
                i++;   // Skip the newly inserted '#'
            }
        }
        return s;
    }
};
