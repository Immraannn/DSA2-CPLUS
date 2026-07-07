#include<iostream> 
using namespace std;

void print(int n) {
    //base case
    if(n == 0) {
        return ;
    }

    //Recursive relation
    print(n-1);

    cout << n << endl;
}

int main() {

    int n;
    cin >> n;
    cout << endl;
    print(n);


    return 0;
}
//output
// 1
// 2
// 3
// 4
// 5

// visualisation of call stack
// print(5)
//    |
// print(4)
//    |
// print(3)
//    |
// print(2)
//    |
// print(1)
//    |
// print(0)
// Nothing is printed yet because cout comes after the recursive call.
//while coming back
// print(0) returns

// print(1) -> prints 1

// print(2) -> prints 2

// print(3) -> prints 3

// print(4) -> prints 4

// print(5) -> prints 5
