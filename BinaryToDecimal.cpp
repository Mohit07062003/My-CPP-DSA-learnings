#include <bits/stdc++.h>
using namespace std;

int BinaryToDecimal(int n){
    int sum=0;
    int multiplier = 1;
    while(n>0){
        int last= n%10;
        sum += last * multiplier ;
        multiplier = multiplier *2;
        n = n/10;
    }
    return sum;
}
int main(){
    cout<<"Enter Binary No. : ";
    int n;
    cin>>n;
    cout<<BinaryToDecimal(n);
    return 0;
}
