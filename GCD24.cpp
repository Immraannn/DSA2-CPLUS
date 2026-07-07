#include<iostream>
using namespace std;

// Function to find GCD of two numbers
int gcd(int a, int b){

    // If first number is 0, GCD is the second number
    if(a == 0)
        return b;

    // If second number is 0, GCD is the first number
    if(b == 0)
        return a;

    // Continue until both numbers become equal
    while(a != b){

        // If a is greater, subtract b from a
        if(a > b){
            a = a - b;
        }

        // Otherwise subtract a from b
        else{
            b = b - a;
        }
    }

    // When both numbers become equal,
    // that value is the GCD
    return a;
}

int main(){

    int a, b;

    // Input two numbers
    cout << "Enter the values of a and b: " << endl;
    cin >> a >> b;

    // Call gcd function
    int ans = gcd(a, b);

    // Print the result
    cout << "The GCD of " << a << " and " << b << " is " << ans << endl;

    return 0;
}
// OUTPUT-
// Enter the vslkues of a and b 
// 24
// 48
// The gcd of 24 and 48 is 24
