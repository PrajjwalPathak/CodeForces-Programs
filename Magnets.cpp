#include<iostream>

using namespace std;

int main() {

    int i, n, c = 1;
    cin>>n;
    char a[n][2];
    
    for(i=0; i<n; i++) {
        cin>>a[i][0]>>a[i][1];
    }
    for(i=0; i<n-1; i++) {
        if(a[i][1] == a[i+1][0]) {
            c++;
        }
    }
    cout<<c;
    
    return 0;
}