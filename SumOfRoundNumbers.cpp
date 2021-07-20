#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    
    int t, n, i, j, p, r;
    vector<int> a;
    cin>>t;
    for(i=0; i<t; i++) {
        a.clear();
        cin>>n;
        
        j = 0;
        while(n != 0) {
            r = n%10;
            n = n/10; 
            p = pow(10,j);
            r = r*p;
            j++;
            if(r == 0) {
                continue;
            }
            else {
                a.push_back(r);
            }
        }
    
    reverse(a.begin(), a.end());
    cout<<a.size()<<"\n";
    for(j=0; j<a.size(); j++) {
        cout<<a[j]<<" ";
    }
    cout<<"\n";
    }
    
    
    return 0;
}