#include<iostream>
using namespace std;

// Transpose the matrix
void transpose(int arr[][3], int n){

    for(int i = 0; i < n; i++){

        for(int j = i + 1; j < n; j++){

            swap(arr[i][j], arr[j][i]);
        }
    }
}

// Reverse every row
void reverseRows(int arr[][3], int n){

    for(int i = 0; i < n; i++){

        int s = 0;
        int e = n - 1;

        while(s < e){

            swap(arr[i][s], arr[i][e]);

            s++;
            e--;
        }
    }
}

// Print matrix
void printMatrix(int arr[][3], int n){

    for(int i = 0; i < n; i++){

        for(int j = 0; j < n; j++){

            cout << arr[i][j] << " ";
        }

        cout << endl;
    }
}

int main(){

    int arr[3][3];

    cout << "Enter matrix:" << endl;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }

    // Step 1
    transpose(arr, 3);

    // Step 2
    reverseRows(arr, 3);

    cout << "\nMatrix after 90 degree rotation:\n";

    printMatrix(arr, 3);

    return 0;
}

// original matrix
// 1 2 3
// 4 5 6
// 7 8 9
// after transpose
// 1 4 7
// 2 5 8
// 3 6 9
//  after reversing each row
// 7 4 1
// 8 5 2
// 9 6 3
