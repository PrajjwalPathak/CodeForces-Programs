#include<iostream>

using namespace std;

string toLowerCase(string s) {
    int i;
    for(i=0; i<s.length(); i++) {
        if(s[i]>=65 && s[i]<=91) {
            s[i] = s[i] + 32;
        }
    }
    return s;
}

int main() {
    string s1, s2;
    cin>>s1;
    cin>>s2;
    s1 = toLowerCase(s1);
    s2 = toLowerCase(s2);
    if(s1>s2) {
        cout<<1;
    }
    else if(s1<s2) {
        cout<<-1;
    }
    else {
        cout<<0;
    }
    return 0;
}