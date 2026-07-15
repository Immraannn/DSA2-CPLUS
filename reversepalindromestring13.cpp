class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;
        // Compare characters from both ends
        while (left < right) {
            // If characters don't match,
            // it is not a palindrome
            if (s[left] != s[right]) {
                return false;
            }
            // Move both pointers
            left++;
            right--;
        }
        // All characters matched
        return true;
    }
};
// case insensitive

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;
        while (left < right) {
            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
};



// reverse a char array


class Solution {
public:
    void reverseString(vector<char>& s) {

        // Pointer to the first character
        int left = 0;

        // Pointer to the last character
        int right = s.size() - 1;

        // Swap characters until both pointers meet
        while (left < right) {

            swap(s[left], s[right]);

            left++;
            right--;
        }
    }
};


// if input is string

class Solution {
public:
    string reverseString(string s) {

        int left = 0;
        int right = s.length() - 1;

        while (left < right) {

            swap(s[left], s[right]);

            left++;
            right--;
        }

        return s;
    }
};

| Function Signature           | Meaning                                                         |
| ---------------------------- | --------------------------------------------------------------- |
| `string func(string s)`      | Return a new string                                             |
| `void func(string& s)`       | Modify the original string                                      |
| `void func(vector<char>& s)` | Modify the original character array                             |
| `void func(string s)`        | ❌ Usually incorrect if you expect the caller's string to change |




