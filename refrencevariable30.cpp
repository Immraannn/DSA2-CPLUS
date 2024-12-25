#include<iostream>
using namespace std;
void update (int n){//pass by value
    n++;
}
void update2 (int& n){//pass by refrence
    n++;
}
int main(){
 /*  int i=5;
    //create a refrence vaiable
    int&j=i;
    cout<<i<<endl; 5
    i++;
    cout<<i<<endl; 6
    j++;
    cout<<i<<endl; 7
    cout<<j<<endl; 7 */
    int n=5;
    cout<<"before "<<n<<endl;
    update(n);
    cout<<"after "<<n<<endl;
    cout<<"before2 "<<n<<endl;
    update2(n);
    cout<<"after2 "<<n<<endl;
    return 0;
}
// OUTPUT-
// before 5
// after 5
// before2 5
// after2 6