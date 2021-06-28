#include<iostream>

using namespace std;

int main() {

    int i, n;
    cin>>n;
    int a[n];
    int b[n];
    for(i=0; i<n; i++) {
        cin>>a[i];
    }
    for(i=0; i<n; i++) {
        b[a[i]-1] = i+1;
    }
    for(i=0; i<n; i++) {
        printf("%d ", b[i]);
    }
    
    return 0;
}