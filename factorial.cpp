#include<iostream>
using namespace std;

int main(){
    cout<<"Enter value of n : ";
    int n;
    cin>> n;
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<fact;

    return 0;
}
