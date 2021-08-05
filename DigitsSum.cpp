#include<iostream>

using namespace std;

int main() {

    long int t, i, n, c;
    cin>>t;
    while(t--) {
        cin>>n;
        c = n/10;
        if(n%10 == 9) {
            c = c+1;
        }
        cout<<c<<"\n";
    }
    
    return 0;
}