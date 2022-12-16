#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n ";
    cin>>n;
    int sum=0;
    while(n>=0){
        sum=sum+n;
        cout<<sum<<endl;
        cin>>n;
        }
    return 0;
}