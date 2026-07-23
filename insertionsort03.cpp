class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {

        int n = nums.size();

        for (int i = 1; i < n; i++) {

            int key = nums[i];
            int j = i - 1;

            // Shift larger elements to the right
            while (j >= 0 && nums[j] > key) {
                nums[j + 1] = nums[j];
                j--;
            }

            // Place the key at its correct position
            nums[j + 1] = key;
        }

        return nums;
    }
};

// cp style
#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& arr)
{
    int n = arr.size();

    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main()
{
    vector<int> arr = {6, 2, 8, 4, 1};

    insertionSort(arr);

    for (int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}
