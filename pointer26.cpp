#include<iostream>
using namespace std;

int main(){

    // Integer variable
    int num = 5;

    // Copy the value of num into a
    int a = num;

    cout << "a before " << a << endl;

    // Increment a
    // Only 'a' changes, num remains unchanged
    a++;

    cout << "a after " << a << endl;

    // Pointer storing the address of num
    int *p = &num;

    cout << "before " << num << endl;

    // Dereference the pointer and increment the value
    // This changes the actual value of num
    (*p)++;

    cout << "after " << num << endl;

    // ------------------------------
    // Copying a Pointer
    // ------------------------------

    // q stores the same address as p
    int *q = p;

    // Both pointers point to the same variable (num)
    cout << p << endl;
    cout << q << endl;

    // ------------------------------
    // Pointer Arithmetic
    // ------------------------------

    int i = 3;

    // Pointer pointing to i
    int *t = &i;

    // Increment the value stored at address t
    *t = *t + 1;

    cout << *t << endl;

    // Print address stored in pointer t
    cout << "before t " << t << endl;

    // Move pointer to the next integer location
    // Since int occupies 4 bytes,
    // the address increases by 4 bytes
    t = t + 1;

    cout << "after t: " << t << endl;

    return 0;
}
// OUTPUT-
// a before 5
// a after 6
// before 5
// after 6
// 0x61fefc
// 0x61fefc
// 4
// before t 0x61fef8
// after t:0x61fefc
