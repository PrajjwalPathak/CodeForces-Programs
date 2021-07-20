#include<iostream>

using namespace std;

char lowercase(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 32;
    }
 
    return c;
}

int main() {

    int n, i, count = 0;
    int c[123] = {0};
    string s;
    cin>>n;
    cin>>s;

    if(n<26) {
        cout<<"NO\n";
    }
    else {
        for(i=0; i<n; i++) {
            s[i] = lowercase(s[i]);
            if(s[i] >= 97 && s[i] <= 122) {
                c[s[i]]++;
            }
        }
        for(i=0; i<123; i++) {
            if(c[i] > 0) {
                count++;
            }
        }
        if(count >= 26) {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }

    return 0;
}