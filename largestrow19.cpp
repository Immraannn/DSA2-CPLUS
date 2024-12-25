#include<iostream>
using namespace std;
int  largestrow(int arr[][4],int r,int c){
    int max=INT8_MIN;
    int rowindex=-1;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum +=arr[i][j];
            }
            if(sum>max){
                max=sum;
                rowindex=i;
            }
        }
    cout<<"The maximum sum is :"<<max<<endl;
    cout<<"The row index is:";
    return rowindex;
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
cout<<largestrow(arr,3,4);
return 0;
}
// OUTPUT-
// 11 12 13 14 10 20 30 40 11 23 34 22            
// 11 12 13 14
// 10 20 30 40
// 11 23 34 22
// The maximum sum is :100
// The row index is:1