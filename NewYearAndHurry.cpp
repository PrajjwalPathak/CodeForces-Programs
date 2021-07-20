#include<iostream>

using namespace std;

int main() {
    
    int n, k, r, i, t = 0, q = 0;
    cin>>n>>k;
    r = 240-k;
    for(i=1; i<=n; i++) {
        t = t + (i*5);
        if(t <= r) {
            q++;
        }
    }
    cout<<q;
    
    
    return 0;
}