#include<iostream>
#include<vector>

using namespace std;

int main() {

    int n, i, one = 0, two = 0, three = 0, m = 0;
    vector<int> o;
    vector<int> t; 
    vector<int> th;  
    cin>>n;
    int a[n];
    for(i=0; i<n; i++) {
        cin>>a[i];
        if(a[i] == 1) {
            one++;
            o.push_back(i+1);
        }
        else if(a[i] == 2) {
            two++;
            t.push_back(i+1);
        }
        else {
            three++;
            th.push_back(i+1);
        }
    }
    m = min(one,min(two,three));
    cout<<m<<"\n";
    if(m != 0) {
        for(i=0; i<m; i++) {
            cout<<o[i]<<" "<<t[i]<<" "<<th[i]<<"\n";
        }
    }
    
    return 0;
}