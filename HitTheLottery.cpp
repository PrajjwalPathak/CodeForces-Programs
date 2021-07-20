#include<iostream>

using namespace std;

int main() {
    long int n; 
    int h = 0, f = 0, t = 0, te = 0, o = 0, count = 0;
    cin>>n;
    if(n>=100) {
        h = n/100;
        n = n%100;
    }
    if(n>=20 && n<100) {
        t = n/20;
        n = n%20;
    }
    if(n>=10 && n<20) {
        te = n/10;
        n = n%10;
    }
    if(n>=5 && n<10) {
        f = n/5;
        n = n%5;
    }
    if(n>=1 && n<5) {
        o = n;
    }
    count = h+t+te+f+o;
    cout<<count;
    
    return 0;
}