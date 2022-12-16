#include<iostream>
using namespace std;

int main(){
    int a ,b ;
    cin>>a>>b;
    int i;
    for(i=a;i<=b;i++){
        int m;
        for(m=2;m<i;m++){
            if(i%m==0){
                break;
            }
        }
        if(m==i){
                cout<<i<<endl;
            }
    }
    return 0;
}