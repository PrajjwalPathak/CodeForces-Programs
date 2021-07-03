#include<iostream>

using namespace std;

long long int fun(long long int n) {
    if(n <= 1) {
        return 1;
    }
    else {
        if(n%2 == 0) {
            return n + fun(n-1);
        }
        else {
            return n - fun(n-1);
        }
    }
    
}

int main() {

    long long int i, n, a = 0;
    cin>>n;
    a = fun(n);
    cout<<a;
    
    return 0;
}