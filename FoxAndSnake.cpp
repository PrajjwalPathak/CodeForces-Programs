#include<iostream>

using namespace std;

int main() {
    
    int n, m, i, j;
    cin>>n>>m;
    char s[n][m];
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            if(i%2 == 0) {
                s[i][j] = '#';
            }
            else {
                s[i][j] = '.';
            }
        }
    }
    for(i=1; i<n; i = i+4) {
        s[i][m-1] = '#';
    }
    for(i=3; i<n; i = i+4) {
        s[i][0] = '#';
    }
    
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            cout<<s[i][j];
        }
        cout<<"\n";
    }

    return 0;
}