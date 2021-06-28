#include<iostream>

using namespace std;

int main() {

    int i, n;
    cin>>n;
    if(n == 1) {
        cout<<"I hate it";
    }
    else if(n == 2) {
        cout<<"I hate that I love it";
    }
    else {
        for(i=1; i<n; i++) {
            if(i%2 != 0) {
                cout<<"I hate that ";
            }
            else {
                cout<<"I love that ";
            }
        }
        if(n%2 != 0) {
            cout<<"I hate it";
        }
        else {
            cout<<"I love it";
        }
    }
    
    return 0;
}