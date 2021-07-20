#include<iostream>
#include<algorithm>

using namespace std;

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    
    int t, i, n, j, k, l, sum;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>n;
        int a[n];
        for(j=0; j<n; j++) {
            cin>>a[j];
        }
        sort(a, a+n);
        l = n;
        sum = 0;
        for(j=1; j<n/2+1; j++) {
            swap(a[j], a[l-1]);
            l--;
        }
        for(j=0; j<n-1; j++) {
            for(k=j+1; k<n; k++) {
                sum = sum + abs(a[j] - a[k]);
            }
        }
        cout<<sum<<"\n";
    }
    
    return 0;
}