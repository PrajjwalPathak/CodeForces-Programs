#include<iostream>

using namespace std;

int main() {

    int i, n, f = 0;
    cin>>n;
    int a[n];
    
    for(i=0; i<n; i++) {
        cin>>a[i];
        if(a[i] == 1) {
            f = 1;
            break;
        }
    }
    if(f == 1) {
        cout<<"HARD";
    }
    else {
        cout<<"EASY";
    }
    
    return 0;
}