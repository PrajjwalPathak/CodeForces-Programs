#include<iostream>

using namespace std;

int main() {

    int n, a, b, i, t = 0, max = 0;
    cin>>n;
    int c[n];
    for(i=0; i<n; i++) {
        cin>>a>>b;
        t = t - a;
        t = t + b;
        c[i] = t;
    }
    max = c[0];
    for(i=0; i<n; i++) {
        if(max < c[i]) {
            max = c[i];
        }
    }
    cout<<max;
    
    return 0;
}