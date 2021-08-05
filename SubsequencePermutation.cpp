#include<iostream>
#include<algorithm>

using namespace std;

int main() {

    int t, n, count;
    string s;
    cin>>t;
    while(t--) {
        cin>>n;
        char c[n];
        cin>>s;
        count = 0;
        for(int i=0; i<n; i++) {
            c[i] = s[i];
        }
        sort(c, c+n);

        for(int i=0; i<n; i++) {
            c[i] = c[i] - s[i];
        }
        for(int i=0; i<n; i++) {
            if(c[i] == 0) {
                count++;
            }
        }
        count = n-count;
        cout<<count<<"\n";

    }
    
    return 0;
}