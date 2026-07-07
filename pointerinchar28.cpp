#include<iostream>
using namespace std;

int main(){

    // Integer array
    int arr[5] = {1,2,3,4,5};

    // Character array (C-string)
    char ch[6] = "abcde";

    // Prints the address of the first element
    cout << arr << endl;

    // Since ch is a character array ending with '\0',
    // cout treats it as a C-string and prints the characters
    cout << ch << endl;

    // Pointer to the first character
    char *c = &ch[0];

    // Prints the complete string
    cout << c << endl;

    // Move pointer two positions ahead
    c = c + 2;

    // Prints the string starting from index 2
    cout << c << endl;

    // Single character
    char temp = 'z';

    // Pointer to temp
    char *p = &temp;

    // Undefined Behavior!
    // cout expects p to point to a null-terminated C-string,
    // but it points to only one character.
    cout << p << endl;

    return 0;
}
// OUTPUT-
// 0x61fef4
// abcde
// abcde
// cde
// zabcde
