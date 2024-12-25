#include<iostream>
using namespace std;
int main(){
    int num=5;
    cout<<num<<endl;
cout<<"adress of num is:"<<&num<<endl;
int*ptr=&num;
// int*ptr=0;-->ptr=&num;  both are sameas above declaartion
cout<<"adress of num is:"<<ptr<<endl;
cout<<"Value of num is :"<<*ptr<<endl;
double d=4.3;
double*p2=&d;
cout<<"adress of d is:"<<p2<<endl;
cout<<"Value of d is :"<<*p2<<endl;
cout<<"size  of integer is :"<<sizeof(num)<<endl;
cout<<"size  of pointer  is :"<<sizeof(ptr)<<endl;
cout<<"size  of pointer  is :"<<sizeof(p2)<<endl;


    return 0;
}
// OUTPUT-
// 5
// adress of num is:0x61ff04
// adress of num is:0x61ff04
// Value of num is :5
// adress of d is:0x61fef8
// Value of d is :4.3
// size  of integer is :4
// size  of pointer  is :4
// size  of pointer  is :4
