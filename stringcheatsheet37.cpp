#include <bits/stdc++.h>
using namespace std;

int main() {

    // =========================================================
    // 1. DECLARATION & BASIC ACCESS
    // =========================================================

    string s = "hello";

    cout << s[0] << endl;        // h
    cout << s.front() << endl;   // h
    cout << s.back() << endl;    // o

    cout << s.length() << endl;  // 5
    cout << s.size() << endl;    // 5

    cout << s.empty() << endl;   // 0 (false)


    // =========================================================
    // 2. TRAVERSING STRING
    // =========================================================

    for(int i = 0; i < s.size(); i++) {
        cout << s[i] << " ";
    }
    // Output: h e l l o

    cout << endl;

    for(char ch : s) {
        cout << ch << " ";
    }
    // Output: h e l l o

    cout << endl;


    // =========================================================
    // 3. MODIFY CHARACTER
    // =========================================================

    s[0] = 'H';

    cout << s << endl;
    // Output: Hello


    // =========================================================
    // 4. PUSH_BACK / POP_BACK
    // =========================================================

    s.push_back('!');

    cout << s << endl;
    // Output: Hello!

    s.pop_back();

    cout << s << endl;
    // Output: Hello


    // =========================================================
    // 5. APPENDING STRING
    // =========================================================

    s += " World";

    cout << s << endl;
    // Output: Hello World


    // =========================================================
    // 6. INSERT
    // =========================================================

    string a = "HelloWorld";

    a.insert(5, " ");

    cout << a << endl;
    // Output: Hello World


    // =========================================================
    // 7. ERASE
    // =========================================================

    string b = "HelloXYZWorld";

    b.erase(5, 3);

    cout << b << endl;
    // Output: HelloWorld
    //
    // erase(start_index, number_of_characters)


    // =========================================================
    // 8. SUBSTRING ⭐
    // =========================================================

    string c = "abcdef";

    cout << c.substr(2, 3) << endl;
    // Output: cde

    cout << c.substr(2) << endl;
    // Output: cdef


    // =========================================================
    // 9. FIND
    // =========================================================

    string d = "hello world";

    cout << d.find("world") << endl;
    // Output: 6

    cout << d.find('o') << endl;
    // Output: 4

    if(d.find("world") != string::npos) {
        cout << "Found" << endl;
    }
    // Output: Found

    if(d.find("xyz") == string::npos) {
        cout << "Not Found" << endl;
    }
    // Output: Not Found


    // =========================================================
    // 10. COUNT CHARACTER
    // =========================================================

    string e = "banana";

    int cnt = count(e.begin(), e.end(), 'a');

    cout << cnt << endl;
    // Output: 3


    // Manual counting

    int countA = 0;

    for(char ch : e) {
        if(ch == 'a')
            countA++;
    }

    cout << countA << endl;
    // Output: 3


    // =========================================================
    // 11. REVERSE
    // =========================================================

    string f = "hello";

    reverse(f.begin(), f.end());

    cout << f << endl;
    // Output: olleh


    // =========================================================
    // 12. SORT
    // =========================================================

    string g = "dcba";

    sort(g.begin(), g.end());

    cout << g << endl;
    // Output: abcd


    // Descending order

    sort(g.begin(), g.end(), greater<char>());

    cout << g << endl;
    // Output: dcba


    // =========================================================
    // 13. STRING COMPARISON
    // =========================================================

    string x = "apple";
    string y = "banana";

    cout << (x == y) << endl;
    // Output: 0

    cout << (x != y) << endl;
    // Output: 1

    cout << (x < y) << endl;
    // Output: 1
    // Lexicographical comparison


    // =========================================================
    // 14. CHARACTER → INTEGER
    // =========================================================

    char ch = '7';

    int num = ch - '0';

    cout << num << endl;
    // Output: 7


    // =========================================================
    // 15. INTEGER → CHARACTER
    // =========================================================

    int digit = 5;

    char character = digit + '0';

    cout << character << endl;
    // Output: 5


    // =========================================================
    // 16. UPPERCASE / LOWERCASE
    // =========================================================

    char p = 'a';

    cout << char(toupper(p)) << endl;
    // Output: A

    char q = 'A';

    cout << char(tolower(q)) << endl;
    // Output: a


    // Whole string

    string upper = "hello";

    for(char &c : upper) {
        c = toupper(c);
    }

    cout << upper << endl;
    // Output: HELLO


    // =========================================================
    // 17. CHARACTER CHECKING
    // =========================================================

    char z = '7';

    cout << isdigit(z) << endl;
    // Output: 1

    cout << isalpha(z) << endl;
    // Output: 0

    cout << isalnum(z) << endl;
    // Output: 1

    cout << islower(z) << endl;
    // Output: 0

    cout << isupper(z) << endl;
    // Output: 0

    cout << isspace(' ') << endl;
    // Output: 1


    // =========================================================
    // 18. STRING → INTEGER ⭐
    // =========================================================

    string numberString = "123";

    int number = stoi(numberString);

    cout << number << endl;
    // Output: 123


    // String → long long

    string bigNumber = "123456789";

    long long ll = stoll(bigNumber);

    cout << ll << endl;
    // Output: 123456789


    // =========================================================
    // 19. INTEGER → STRING
    // =========================================================

    int value = 123;

    string str = to_string(value);

    cout << str << endl;
    // Output: 123


    // =========================================================
    // 20. STRINGSTREAM ⭐
    // =========================================================

    string sentence = "I love DSA";

    stringstream ss(sentence);

    string word;

    while(ss >> word) {
        cout << word << endl;
    }

    // Output:
    // I
    // love
    // DSA


    // =========================================================
    // 21. FREQUENCY ARRAY ⭐⭐⭐
    // =========================================================

    string freqString = "banana";

    int freq[26] = {0};

    for(char c : freqString) {
        freq[c - 'a']++;
    }

    cout << freq['a' - 'a'] << endl;
    // Output: 3

    cout << freq['b' - 'a'] << endl;
    // Output: 1

    cout << freq['n' - 'a'] << endl;
    // Output: 2


    // Print all characters with frequency

    for(int i = 0; i < 26; i++) {

        if(freq[i] > 0) {
            cout << char('a' + i)
                 << " : "
                 << freq[i] << endl;
        }
    }

    // Output:
    // a : 3
    // b : 1
    // n : 2


    // =========================================================
    // 22. UNORDERED_MAP FREQUENCY ⭐⭐⭐
    // =========================================================

    string h = "banana";

    unordered_map<char,int> mp;

    for(char c : h) {
        mp[c]++;
    }

    cout << mp['a'] << endl;
    // Output: 3

    cout << mp['n'] << endl;
    // Output: 2


    // =========================================================
    // 23. PALINDROME ⭐⭐⭐
    // =========================================================

    string pal = "madam";

    int i = 0;
    int j = pal.size() - 1;

    bool isPalindrome = true;

    while(i < j) {

        if(pal[i] != pal[j]) {
            isPalindrome = false;
            break;
        }

        i++;
        j--;
    }

    cout << isPalindrome << endl;
    // Output: 1 (true)


    // =========================================================
    // 24. TWO POINTERS ⭐⭐⭐
    // =========================================================

    string rev = "abcdef";

    i = 0;
    j = rev.size() - 1;

    while(i < j) {

        swap(rev[i], rev[j]);

        i++;
        j--;
    }

    cout << rev << endl;
    // Output: fedcba


    // =========================================================
    // 25. REMOVE DUPLICATES
    // =========================================================

    string duplicate = "programming";

    unordered_set<char> seen;

    string unique = "";

    for(char c : duplicate) {

        if(seen.find(c) == seen.end()) {

            unique += c;
            seen.insert(c);
        }
    }

    cout << unique << endl;
    // Output: progamin
    // (first occurrence of each character)


    // =========================================================
    // 26. VECTOR OF CHARACTERS
    // =========================================================

    string str2 = "hello";

    vector<char> v(str2.begin(), str2.end());

    for(char c : v) {
        cout << c << " ";
    }

    // Output: h e l l o


    // =========================================================
    // 27. MAX / MIN CHARACTER
    // =========================================================

    string chars = "zabc";

    cout << *max_element(chars.begin(), chars.end()) << endl;
    // Output: z

    cout << *min_element(chars.begin(), chars.end()) << endl;
    // Output: a


    // =========================================================
    // 28. FIND CHARACTER USING STL
    // =========================================================

    string findString = "hello";

    auto it = find(findString.begin(),
                   findString.end(),
                   'e');

    if(it != findString.end()) {
        cout << "Found" << endl;
    }

    // Output: Found


    return 0;
}
