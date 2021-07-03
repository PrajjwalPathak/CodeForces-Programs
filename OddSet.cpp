#include<iostream>

using namespace std;

int main() {
    
    int t, n, i, j, o, e;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>n;
        int a[2*n];
        e = 0;
        o = 0;
        for(j=0; j<2*n; j++) {
            cin>>a[j];
            if(a[j]%2 == 0) {
                e++;
            }
            else {
                o++;
            }
        }
        if(o == e) {
            cout<<"Yes"<<"\n";
        }
        else {
            cout<<"No"<<"\n";
        }
    }
    return 0;
}