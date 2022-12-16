#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter the side of triangle:- ";
    cin>>a>>b>>c;
    if(a==b){
        if(b==c){
            cout<<"Equilateral Triangle";
        }
        else{
            cout<<"Isoscalen Triangle";
        }    
    }
    else{
        if(b==c){
            cout<<"Isoscalen Triangle";
        }
        else if(a==c){
            cout<<"Isoscalen Triangle";
        }
        else{
            cout<<"Scalen Triangle";
        }
    }
    return 0;
}
