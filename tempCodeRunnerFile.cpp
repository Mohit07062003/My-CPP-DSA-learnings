#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the value of n ";
    cin>>n;
    int Sum = 0;
    for(int Count = 0; Count <= n ; Count = Count++){
    Sum = Sum + Count ;
    }
    cout<<Sum;
    return 0;
}