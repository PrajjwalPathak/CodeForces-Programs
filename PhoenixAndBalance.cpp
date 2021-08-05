#include<iostream>
#include<cmath>

using namespace std;

int main() {

    int t, n, i, k, suma, sumb;
    cin>>t;
    while(t--) {
        cin>>n;
        if(n == 2) {
            cout<<2<<"\n";
        }
        else {
            suma = 0;
            sumb = 0;
            k = 0;
            long int a[n];
            for(i=1; i<=n; i++) {
                a[k] = pow(2,i);
                k++;
            }
            suma = a[n-1];
            for(i=0; i<(n/2)-1; i++){
                suma = suma + a[i];
            }
            for(i=(n/2)-1; i<n-1; i++){
                sumb = sumb + a[i];
            }
            cout<<abs(suma-sumb)<<"\n";
        }
    }
    
    return 0;
}