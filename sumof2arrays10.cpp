#include<iostream>
using namespace std;

// Function to add two arrays representing numbers
void sumArray(int arr1[], int n, int arr2[], int m, int ans[]) {

    // Start from the last digit of both arrays
    int i = n - 1;
    int j = m - 1;

    // Last index of answer array
    int k = (n > m ? n : m);

    // Initially carry is 0
    int carry = 0;

    // Add digits while both arrays have elements
    while(i >= 0 && j >= 0) {

        // Calculate sum of current digits and carry
        int sum = arr1[i] + arr2[j] + carry;

        // Store last digit of sum
        ans[k] = sum % 10;

        // Update carry
        carry = sum / 10;

        // Move to previous digits
        i--;
        j--;
        k--;
    }

    // If arr1 still has digits left
    while(i >= 0) {

        int sum = arr1[i] + carry;

        ans[k] = sum % 10;
        carry = sum / 10;

        i--;
        k--;
    }

    // If arr2 still has digits left
    while(j >= 0) {

        int sum = arr2[j] + carry;

        ans[k] = sum % 10;
        carry = sum / 10;

        j--;
        k--;
    }

    // Store the remaining carry (if any)
    ans[k] = carry;
}

int main() {

    // First number = 123
    int arr1[] = {1,2,3};

    // Second number = 99
    int arr2[] = {9,9};

    int n = 3;
    int m = 2;

    // Answer array size = max(n,m) + 1
    // Extra space is needed for a possible carry
    int ans[4];

    // Call the function
    sumArray(arr1, n, arr2, m, ans);

    cout << "Sum = ";

    // Print the answer array
    for(int i = 0; i < 4; i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
