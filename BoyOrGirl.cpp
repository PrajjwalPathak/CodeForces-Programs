#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {

    int c, i;
    string s;
    vector<int> a;
    cin>>s;
    c = 0;
    for(i=0; i<s.length(); i++) {
        a.push_back(s[i]);
    }
    sort(a.begin(), a.end());
    for(i=0; i<a.size()-1; i++) {
        if(a[i] != a[i+1]) {
            c++;
        }
    }
    c = c + 1;
    if(c%2 == 0) {
        cout<<"CHAT WITH HER!";
    }
    else {
        cout<<"IGNORE HIM!";
    }
    return 0;
}