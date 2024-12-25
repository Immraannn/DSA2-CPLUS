#include <iostream>
#include <string>

using namespace std;

int main() {
    string str, result = "";
    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            result += "@40";
        } else {
            result += str[i];
        }
    }

    cout << "Modified string: " << result << endl;
    return 0;
}



// OUTPUT-
// Enter a string: my name is imran
// Modified string: my@40name@40is@40imran

