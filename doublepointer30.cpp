#include<iostream>
using namespace std;

// Doubles the value
void update(int *p){
    *p = (*p) * 2;
}

// Increments the value using a double pointer
void increment(int **p){
    ++(**p);
}

int main(){

    int num = 110;

    // ptr stores the address of num
    int *ptr = &num;

    // ptr2 stores the address of ptr
    int **ptr2 = &ptr;

    cout << "Initial value of num : " << num << endl;
    // Output:
    // Initial value of num : 110


    update(ptr);

    cout << "After update() : " << num << endl;
    // Output:
    // After update() : 220


    increment(&ptr);

    cout << "After increment() : " << num << endl;
    // Output:
    // After increment() : 221


    cout << "\n----- Pointer Information -----" << endl;
    // Output:
    // ----- Pointer Information -----


    cout << "num = " << num << endl;
    // Output:
    // num = 221


    cout << "&num = " << &num << endl;
    // Output:
    // &num = 0x61fefc
    // (Address will be different on your computer)


    cout << "ptr = " << ptr << endl;
    // Output:
    // ptr = 0x61fefc
    // Same as &num


    cout << "*ptr = " << *ptr << endl;
    // Output:
    // *ptr = 221


    cout << "&ptr = " << &ptr << endl;
    // Output:
    // &ptr = 0x61fef8
    // (Different on every system)


    cout << "ptr2 = " << ptr2 << endl;
    // Output:
    // ptr2 = 0x61fef8
    // Same as &ptr


    cout << "*ptr2 = " << *ptr2 << endl;
    // Output:
    // *ptr2 = 0x61fefc
    // Same as ptr


    cout << "**ptr2 = " << **ptr2 << endl;
    // Output:
    // **ptr2 = 221

    return 0;
}
