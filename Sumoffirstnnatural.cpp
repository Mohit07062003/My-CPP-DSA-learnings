#include<iostream>
using namespace std;

int sum(int n){
    int sum = 0;
    for(int i=1; i<=n;i++){
        sum=sum+i;
    }
    return sum;
}

int main(){
    cout<<"Enter a no. n : ";
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}
