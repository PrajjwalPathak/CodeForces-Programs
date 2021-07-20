#include<iostream>
#include<string>

using namespace std;

int main() {
    int i, count = 0;
    string s;
    int c[123] = {0};
    getline(cin, s);
    for(i=0; i<s.length(); i++) {
        if(s[i] >= 97 && s[i] <= 122) {
            c[s[i]]++;
        }
        else {
            continue;
        }
    }
    for(i=0; i<123; i++) {
        if(c[i]>0) {
            count++;
        }
    }
    cout<<count;
    
    return 0;
}