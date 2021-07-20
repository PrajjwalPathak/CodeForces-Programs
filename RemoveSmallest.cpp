#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    
    int t, n, i, j, f;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>n;
        int a[n];
        for(j=0; j<n; j++) {
            cin>>a[j];
        }
        f = 1;
        sort(a, a+n);
        
        if(n == 1) {
            cout<<"YES\n";
        }
        else {
            for(j=0; j<n-1; j++) {
                if((a[j+1]-a[j]) <= 1) {
                    f = 1;
                }
                else {
                    f = 0;
                    break;
                }
            }
            if(f == 1) {
                cout<<"YES\n";
            }
            else {
                cout<<"NO\n";
            }
        }
    }
    
    return 0;
}