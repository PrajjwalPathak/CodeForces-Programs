#include<iostream>

using namespace std;

int main() {
    int n, i, length;
    scanf("%d", &n);
    string s[n];
    for(i=0; i<n; i++) {
        cin>>s[i];
    }
    for(i=0; i<n; i++) {
        length = s[i].length();
        if(length > 10) {
            cout<<s[i][0]<<length-2<<s[i][length-1]<<"\n";
        }
        else {
            cout<<s[i]<<"\n";
        }
    }
    return 0;
}