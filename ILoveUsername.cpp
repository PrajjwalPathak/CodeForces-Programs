#include<iostream>

using namespace std;

int main() {
    
    int n, i, max = 0, min = 10000, c = 0;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++) {
        cin>>a[i];
    }
    max = a[0];
    min = a[0];
    for(i=1; i<n; i++) {
        if(a[i] > max) {
            max = a[i];
            c++;
        }
        else if(a[i] < min) {
            min = a[i];
            c++;
        }
        else {
            continue;
        }
    }
    cout<<c;
    
    return 0;
}