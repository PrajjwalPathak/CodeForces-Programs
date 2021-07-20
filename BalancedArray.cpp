#include<iostream>

using namespace std;

int main() {

    int t, n, i, j, k, sum1, sum2;
    cin>>t;
    while(t--) {
        cin>>n;
        int a[n];
        j = 0;
        k = n/2;
        sum1 = 0;
        sum2 = 0;
        for(i=1; i<=n; i++) {
            if(i%2 == 0) {
                a[j] = i;
                j++;
            }
            else {
                a[k] = i;
                k++;
            }
        }
        for(i=0; i<n/2; i++) {
            sum1 = sum1 + a[i];
        }
        for(i=n/2; i<n; i++) {
            sum2 = sum2 + a[i];
        }
        if(sum1 == sum2) {
            cout<<"YES\n";
            for(i=0; i<n; i++) {
                cout<<a[i]<<" ";
            }
            cout<<"\n";
        }
        else {
            cout<<"NO\n";
        }
    }
        
    return 0;
}