class Solution {
public:
    vector<int> rowWiseSum(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<int> ans;
        for (int i = 0; i < rows; i++) {
            int sum = 0;
            for (int j = 0; j < cols; j++) {
                sum += matrix[i][j];
            }
            ans.push_back(sum);
        }
        return ans;
    }
};





#include<iostream>
using namespace std;
void printsum(int arr[][4],int r,int c){
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum +=arr[i][j];
        }
        cout<<"sum of "<<i<<" row is :"<<sum<<endl;
    }
}
int main(){
    int arr[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
printsum(arr,3,4);
return 0;
}
// OUTPUT-
// 1 2 3 4 5 6 7 8 9 9 8 7
// 1 2 3 4 
// 5 6 7 8 
// 9 9 8 7 
// sum of 0 row is :10
// sum of 1 row is :26
// sum of 2 row is :33
