#include<iostream>
#include<vector>

using namespace std;

int main() {

    int t, n, i, f;
    string s;
    vector<char> c;
    cin>>t;
    while(t--) {
        int alpha[123] = {0};
        c.clear();
        cin>>n;
        cin>>s;
        f = 0;
        c.push_back(s[0]);
        alpha[s[0]]++;
        for(i=1; i<n; i++) {
            if(alpha[s[i]] == 0) {
                c.push_back(s[i]);
                alpha[s[i]]++;
            }
            else if(alpha[s[i]] != 0 && s[i] != s[i-1]) {
                f = 1;
            }
            else {
                continue;
            }
        }
        if(f == 0) {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }
        
    return 0;
}