#include<iostream>
#include<algorithm>

using namespace std;

int main() {

    int t, n, i, j;
    cin>>t;
    while(t--) {
        cin>>n;
        int a[n];
        for(i=0; i<n; i++) {
            cin>>a[i];
        }
        if(n == 2) {
            cout<<abs(a[0]-a[1])<<"\n";
        }
        else {
            int b[n-1];
            j = 0;
            sort(a, a+n);
            for(i=0; i<n-1; i++) {
                b[j] = abs(a[i]-a[i+1]);
                j++;
            }
            cout<<*min_element(b, b+(n-1))<<"\n";
        }
    }
        
    return 0;
}