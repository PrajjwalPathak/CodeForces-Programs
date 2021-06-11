#include<iostream>

using namespace std;

int main() {
    int n, k, i, count=0;
    scanf("%d %d", &n, &k);
    int f[n];
    for(i=0; i<n; i++) {
        scanf("%d", &f[i]);
    }
    if(f[k-1]==0) {
        for(i=0; i<n; i++) {
            if(f[i]>0) {
                count++;
            }
        }
    }
    else {
        for(i=0; i<n; i++) {
            if(f[i]>=f[k-1]) {
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}