#include<iostream>

using namespace std;

int isComposite(int n) {
    int i = 2;
    while(i<=n/2) {
        if(n%i == 0) {
            return 1;
            break;
        }
        i++;
    }
    return 0;
}

int main() {

    int n, i;
    cin>>n;
    for(i=4; i<=n; i++) {
        if(isComposite(i) && isComposite(n-i)) {
            cout<<i<<" "<<n-i;
            break;
        }
    }
    
    return 0;
}