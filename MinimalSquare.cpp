#include<iostream>
#include<algorithm>

using namespace std;

int main() {

    int t, a, b, p, i;
    cin>>t;
    while(t--) {
        cin>>a>>b;
        if(a == b) {
            cout<<2*a*2*a<<"\n";
        }
        else {
            if(a>b) {
                if(2*b>a) {
                    p = 4*b*b;
                }
                else {
                    p = a*a;
                }
            }
            else {
                if(2*a>b) {
                    p = 4*a*a;
                }
                else {
                    p = b*b;
                }
            }
            cout<<p<<"\n";
        }
    }
        
    return 0;
}