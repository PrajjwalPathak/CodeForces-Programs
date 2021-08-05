#include<iostream>

using namespace std;

int main() {

    int q, i, pos, f;
    cin>>q;
    string s, t;
    while(q--) {
        cin>>s>>t;
        f = 0;
        if(s == t) {
            f = 1;
        }
        else if(t.length() == 1) {
            for(i=0; i<s.length(); i++) {
                if(t[0] == s[i]) {
                    f = 1;
                }
            }
        }
        else {
            for(i=0; i<s.length(); i++) {
                if(t[0] == s[i]) {
                    pos = i;
                }
            }
            if(pos == s.length()-1) {
                pos = pos-1;
                for(i=1; i<t.length(); i++) {
                    if(t[i] == s[pos]) {
                        f = 1;
                        pos = pos-1;
                    }
                }
            }
            else {
                for(i=1; i<t.length(); i++) {
                    if(t[i] == s[pos+1]) {
                        f = 1;
                        pos = pos+1;
                    }
                    else if(t[i] == s[pos-1]) {
                        f = 1;
                        pos = pos-1;
                    }
                    else {
                        f = 0;
                    }
                }

            }


            
        }
        if(f == 1) {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
        
        
    }
    
    return 0;
}