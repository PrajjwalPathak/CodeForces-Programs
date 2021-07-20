#include<iostream>

using namespace std;

int main() {
    int n, i, j, c = 0;
    cin>>n;
    int h[n];
    int a[n];
    for(i=0; i<n; i++) {
        cin>>h[i]>>a[i];
    }
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            if(h[i] == a[j]) {
                c++;
            }
        }
    }
    cout<<c;

    return 0;
}