#include<iostream>

using namespace std;

int main() {

    int t, i, j;
    string b;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>b;
        string a = "";
        if(b.length() == 2) {
            cout<<b<<"\n";
        }
        else {
            for(j=0; j<b.length(); j = j+2) {
                a = a + b[j];
            }
            a = a + b[b.length()-1];
            cout<<a<<"\n";
        }
    }
    
    return 0;
}