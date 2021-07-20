#include<iostream>

using namespace std;

int main() {
    
    int n, i, max = 0, min = 100, posMax = 0, posMin = 0, time = 0;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++) {
        cin>>a[i];
    }
    if(a[0] == max && a[n-1] == min) {
        cout<<0;
    }
    else {
        for(i=0; i<n; i++) {
            if(a[i] > max) {
                max = a[i];
                posMax = i;
            }
        }
        time = posMax;
    
        for(i=0; i<n; i++) {
            if(a[i] <= min) {
                min = a[i];
                posMin = i;
            }
        }
        time = time + ((n-1)-posMin);
    }
    if(posMin < posMax) {
        cout<<time-1;
    }
    else {
        cout<<time;
    }
    
    return 0;
}