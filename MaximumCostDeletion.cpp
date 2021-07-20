#include<iostream>

using namespace std;

int score(int a, int b, int l) {
    return (a*l)+b;
}

int main() {

    int t, i, n, a, b, sum;
    string s;
    cin>>t;
    while(t--) {
        sum = 0;
        cin>>n>>a>>b;
        cin>>s;
        if(a<0) {
            sum = n*(b-a);
        }
        else {
            for(i=0; i<n-1; i++) {
                if(s[i] != s[i+1]) {
                    
                }
            }
        }
    }
    
    return 0;
}