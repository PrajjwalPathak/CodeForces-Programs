#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

    int i, j;
    string s;
    cin>>s;
    vector<int> a;
    if(s.length() == 1 || s.length() == 2) {
        cout<<s;
    }
    else {
        for(i=0; i<s.length(); i = i+2) {
            a.push_back(s[i]);
        }
        sort(a.begin(), a.end());
        j = 0;
        for(i=0; i<s.length(); i = i+2) {
            s[i] = a[j];
            j++;
        }
        cout<<s;
    }
    
    return 0;
}