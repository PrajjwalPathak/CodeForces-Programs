#include<iostream>

using namespace std;

int main() {

    int n, i, u = 0, sum = 0;
    cin>>n;
    int r[n];
    for(i=0; i<n; i++) {
        cin>>r[i];
    }
    for(i=0; i<n; i++) {
        if(r[i]>0) {
            sum = sum + r[i];
        }
        else {
            if(sum>0) {
                sum--;
            }
            else {
                u++;
            }
        }
    }
    cout<<u;
    
    
    return 0;
}