#include<iostream>
#include<vector>

using namespace std;

int main() {
    
    int t, i, j, pos, f;
    string s;
    char c;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>s;
        if(s == "a") {
            cout<<"YES\n";
        }
        else {
            f = 0;
            c = 98;
            for(j=0; j<s.length(); j++) {
                if(s[j] == 'a') {
                    pos = j;
                }
            }
            while(true) {

                if((s[pos + 1] != c) || (s[pos - 1] != c)) {
                    f = 1;
                    break;
                }
                c++;
                if(c == 123) {
                    break;
                }
            }
            if(f == 0) {
            cout<<"YES\n";
        }
            else {
            cout<<"NO\n";
        }
        }
        
        
    }
    
    return 0;
}