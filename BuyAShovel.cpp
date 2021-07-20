#include<iostream>

using namespace std;

int main() {

    int k, r, c = 1, i = 1;
    cin>>k>>r;

    if((k%10) == 0) {
        cout<<1;
    }
    else {
        while((i*k)%10 != r) {
            if((i*k)%10 == 0) {
                break;
            }
            i++;
            c++;
            
        }
        cout<<c;
    }
    
    return 0;
}