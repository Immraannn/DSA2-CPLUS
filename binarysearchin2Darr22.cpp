#include<iostream>
using namespace std;

// Function to search target element in a sorted 2D matrix
bool searchMatrix(int arr[3][4], int target, int r, int c){

    // Binary search start index
    int s = 0;

    // Binary search end index
    int e = r * c - 1;

    // Continue until search space becomes empty
    while(s <= e){

        // Calculate middle index
        int mid = s + (e - s) / 2;

        // Convert 1D index into 2D row and column
        int element = arr[mid / c][mid % c];

        // Target found
        if(element == target){
            return true;
        }

        // Search in the right half
        else if(element < target){
            s = mid + 1;
        }

        // Search in the left half
        else{
            e = mid - 1;
        }
    }

    // Target not found
    return false;
}

int main(){

    // Declare a 3 × 4 matrix
    int arr[3][4];

    // Input matrix elements
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cin >> arr[i][j];
        }
    }

    // Search for 13 and print the result
    // Output:
    // 1 -> Found
    // 0 -> Not Found
    cout << searchMatrix(arr, 13, 3, 4);

    return 0;
}
// OUTPUT-
// 11 12 13 14
// 15 16 17 18
// 19 20 21 22
// 1
