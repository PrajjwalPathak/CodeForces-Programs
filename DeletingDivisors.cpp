#include<iostream>
#include<vector>

using namespace std;

int main() {
    int t, n, i, j, count;

    cin>>t;
    int arr[t];
    for(i=0; i<t; i++) {
        cin>>n;
        if(n == 1 || n == 2 || n == 3) {
            arr[i] = 2;
        }
        else {
            count = 0;
            for(j=2; j<n; j++) {
                if(n%j == 0) {
                    n = n-j;
                    j = 2;
                    cout<<j<<"\n";
                    
                    count++;
                    continue;
                    
                }
                
            }
            if(count%2 == 0) {
                arr[i] = 2;
            }
            else {
                arr[i] = 1;
            }
        }
    }

    for(i=0; i<t; i++) {
        if(arr[i] == 1) {
            cout<<"Alice"<<"\n";
        }
        else {
            cout<<"Bob"<<"\n";
        }
    }
    
    return 0;
}