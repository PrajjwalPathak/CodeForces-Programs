#include<iostream>

using namespace std;

int main() {

    int i, n, h, w = 0;
    cin>>n>>h;
    int a[n];
    for(i=0; i<n; i++) {
        cin>>a[i];
        if(a[i] <= h) {
            w++;
        }
        else {
            w = w + 2;
        }
    }
    printf("%d", w);
    return 0;
}