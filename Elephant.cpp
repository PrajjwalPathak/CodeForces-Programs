#include<iostream>

using namespace std;

int main() {

    int x, s = 0;
    cin>>x;
    if(x > 0 && x <= 5) {
        cout<<1;
    }
    else {
        if(x%5 == 0) {
            s = x/5;
            cout<<s;
        }
        else {
            s = x/5;
            s = s + 1;
            cout<<s;
        }
    }
    
    return 0;
}