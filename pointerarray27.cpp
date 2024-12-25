#include<iostream>
using namespace std;
int main(){
    int arr[10]={2,5,6,7};
    cout<<"adress of  first memory block is "<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<"adress of first memory block is "<<&arr[0]<<endl;
    cout<<"value at  0 index : "<<*arr<<endl;
    cout<<"value at  1st index : "<<*(arr+1)<<endl;
    cout<<"value at  0 indexis increased : "<<*(arr)+1<<endl;
    cout<<"value at  2nd index : "<<arr[2]<<endl;
    cout<<"value at  2nd index : "<<*(arr+2)<<endl;
    //arr[i]=*(arr+i) or i[arr]=*(i+arr)
    int i=3;
    cout<<"Value at 3rd index :"<<i[arr];
    int temp[10]={1,2};
    cout<<sizeof(temp)<<endl;
    cout<<"1st "<<sizeof(*temp)<<endl;
    cout<<"1st "<<sizeof(&temp)<<endl;
    int*ptr=&temp[0];
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;
    int brr[10]={11,16,28,9};
    int*pt=brr;
    cout<<"Value at 0 index is:"<<*(pt)<<endl;
    pt=pt+1;
    cout<<"Value at 1st index is:"<<*(pt)<<endl;

        return 0;
}
// OUTPUT-
// adress of  first memory block is 0x61fed4
// 2
// adress of first memory block is 0x61fed4
// value at  0 index : 2
// value at  1st index : 5
// value at  0 indexis increased : 3
// value at  2nd index : 6
// value at  2nd index : 6
// Value at 3rd index :740
// 1st 4
// 1st 4
// 4
// 4
// 4
// Value at 0 index is:11
// Value at 1st index is:16