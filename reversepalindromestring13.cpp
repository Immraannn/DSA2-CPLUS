class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.length() - 1;
        while (l < r) {
            if (!isalnum(s[l])) {
                l++;
                continue;
            }
            if (!isalnum(s[r])) {
                r--;
                continue;
            }
            if (tolower(s[l]) != tolower(s[r])) {
                return false;
            }
            l++;
            r--;
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


// concept
while (...)
{
    if (...)
    {
        return false;   // Entire function ends here
    }
}

cout << "Hello";   // This will never execute if return is reached.




