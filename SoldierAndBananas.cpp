#include<iostream>

using namespace std;

int main() {

    int k, n, w, i, t;
    cin>>k>>n>>w;
    t = 0;
    for(i=1; i<=w; i++) {
        t = t + (i*k);
    }
    if(t > n) {
        cout<<t-n;
    }
    else {
        cout<<0;
    }
    
    return 0;
}