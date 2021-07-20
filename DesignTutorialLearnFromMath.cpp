#include<iostream>

using namespace std;

int isNotPrime(int a) {
    int i = 2;
    if(a == 1 || a == 2 || a == 3) {
        return 0;
    }
    else {
        while(a--) {
        if(a%i == 0) {
            return 0;
            break;
            
        }
        else {
            return 1;
        }
        i++;
        }
    }
    return 0;
}

int main() {

    int n, a = 4;
    cin>>n;
    while(a<=n) {
        if(isNotPrime(a) && isNotPrime(n-a)) {
            cout<<a<<" "<<n-a;
            break;
        }
        else {
            a++;
            continue;
        }
        
    }
    
    return 0;
}