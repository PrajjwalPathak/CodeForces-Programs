#include<iostream>

using namespace std;

int main() {
    
    int a, b;
    cin>>a>>b;
    if(a>b) {
        cout<<b<<" ";
        if((a-b) >= 2) {
            cout<<(a-b)/2;
        }
        else {
            cout<<0;
        }
    }
    else if(a<b) {
        cout<<a<<" ";
        if((b-a) >= 2) {
            cout<<(b-a)/2;
        }
        else {
            cout<<0;
        }
    }
    else {
        cout<<a<<" "<<0;
    }
    
    return 0;
}