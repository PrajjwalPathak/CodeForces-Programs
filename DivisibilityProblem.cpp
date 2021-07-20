#include<iostream>

using namespace std;

int main() {
    int t, i, c;
    long a, b, j;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>a>>b;
        if(a%b == 0) {
            cout<<0<<"\n";
        }
        else {
            cout<<b-a%b<<"\n";
        }
    }
    
    return 0;
}