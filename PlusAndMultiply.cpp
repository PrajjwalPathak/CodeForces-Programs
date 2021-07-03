#include<iostream>

using namespace std;

int main() {
    
    int t, i, f;
    long long int j, n, a, b, resa, resb, r;
    cin>>t;
    for(i=0; i<t; i++) {
        resa = 1;
        resb = 1;
        r = 1;
        f = 0;
        cin>>n>>a>>b;
        while(resb<n) {
            resa = r*a;
            resb = r+b;
            if(a == 1) {
                r = resb;
            }
            else if(b == 1) {
                r = resa;
            }
            else {
                if(resa > resb) {
                    r = resb;
                }
                else {
                    r = resa;
                }
            }
            if(resa == n || resb == n) {
                f = 1;
                break;
            }
        } 
        if(f == 1) {
            cout<<"Yes"<<"\n";
        }
        else {
            cout<<"No"<<"\n";
        }
        
    }
    return 0;
}