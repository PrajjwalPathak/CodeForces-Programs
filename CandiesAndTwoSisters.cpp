#include<iostream>

using namespace std;

int main() {
    
    long int t, n, i;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>n;
        if(n%2==0) {
            cout<<n/2-1<<"\n";
        }
        else {
            cout<<n/2<<"\n";
        }
    }

    return 0;
}