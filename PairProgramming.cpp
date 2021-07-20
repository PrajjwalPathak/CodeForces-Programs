#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    
    int t, i, k, n, m, j, f, l, o, temp;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>k>>n>>m;
        vector<int> s;
        int c[n+m];
        int a[n];
        int b[m];
        f = 0;
        for(j=0; j<n; j++) {
            cin>>a[j];
        }
        for(j=0; j<m; j++) {
            cin>>b[j];
        }

        for(j=0; j<n; j++) {
            c[j] = a[j];
        }
        l = 0;
        for(j=n; j<n+m; j++) {
            c[j] = b[l];
            l++;
            if(l == m) {
                break;
            }
        }
        if(n>m) {
            for(j=0; j<n; j++) {
            for(o=n; o<n+m; o++) {
                if(c[j] > c[o]) {
                    temp = c[o];
                    c[o] = c[j];
                    c[j] = temp;
                }
            }
        }
        }
        else {
            for(j=0; j<m; j++) {
            for(o=m; o<n+m; o++) {
                if(c[j] > c[o]) {
                    temp = c[o];
                    c[o] = c[j];
                    c[j] = temp;
                }
            }
        }

        }
        

        for(j=0; j<n+m; j++) {
            
            if(c[j] == 0) {
                k++;
                s.push_back(c[j]);
            }
            else {
                if(c[j] <= k) {
                    s.push_back(c[j]);
                }
                else {
                    f = 1;
                }
            }
        }
        if(f == 1) {
            cout<<-1<<"\n";
        }
        else {
            for(j=0; j<s.size(); j++) {
                cout<<s[j]<<" ";
            }
            cout<<"\n";
        }
    }
    
    return 0;
}