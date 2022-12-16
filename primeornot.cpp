#include<iostream>
using namespace std;

int main(){
    cout<<"Enter value of n :";
    int n;
    cin>> n;
    bool flag= true;
    for(int i=2; i*i<=n;i++){
        if(n%i==0){
            flag = false;
            break;
        }
    }
    if(flag){
        cout<<"Prime";
    } 
    else{
        cout<<"Not Prime";
    }
    return 0;
}
