#include<iostream>

using namespace std;

int main() {

    int i, u = 0, l = 0;
    string s;
    cin>>s;
    for(i=0; i<s.length(); i++) {
        if(s[i] <= 90) {
            u++;
        }
        else if(s[i] >= 97) {
            l++;
        }
    }
    if(l > u || l == u) {
        for(i=0; i<s.length(); i++) {
            if(s[i] <= 90) {
                s[i] = s[i] + 32;
            }
        }
    }
    else {
        for(i=0; i<s.length(); i++) {
            if(s[i] >= 97) {
                s[i] = s[i] - 32;
            }
        }
    }
    cout<<s;
    
    return 0;
}