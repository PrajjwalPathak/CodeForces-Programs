#include<iostream>
#include<algorithm>

using namespace std;

int main() {

    int t, n, k, i, min, max;
    cin>>t;
    while(t--) {
        cin>>n>>k;
        int a[n];
        int b[n];
        for(i = 0; i<n; i++) {
            cin>>a[i];
        }
        for(i = 0; i<n; i++) {
            cin>>b[i];
        }
        while(k--) {
            min = *min_element(a, a + n);
            max = *max_element(b, b + n);
            
        }
    }
    
    return 0;
}